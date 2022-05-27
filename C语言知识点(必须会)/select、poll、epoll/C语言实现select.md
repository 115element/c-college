###C语言实现select
```c
#include <stdio.h>
#include <poll.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <string.h>

int main() {
    return 0;
}


void do_proxy (int usersockfd)
{
    int isosockfd;
    fd_set rdfdset;
    int connstat;
    int iolen;
    char buf[2048];
    /* open a socket to connect to the isolated host */
    if ((isosockfd = socket(AF_INET,SOCK_STREAM,0)) < 0)
        errorout("failed to create socket to host");
    /* attempt a connection */
    connstat = connect(isosockfd,(struct sockaddr *) &hostaddr, sizeof(hostaddr));
    switch (connstat) {
        case 0:
            break;
        case ETIMEDOUT:
        case ECONNREFUSED:
        case ENETUNREACH:
            strcpy(buf,sys_myerrlist[errno]);
            strcat(buf,"\r\n");
            write(usersockfd, buf, strlen(buf));
            close(usersockfd);
            exit(1);
            /* die peacefully if we can't establish a connection */
            break;
        default:
            errorout("failed to connect to host");
    }
    
    /* now we're connected, serve fall into the data echo loop */
    while (1) {
        /* Select for readability on either of our two sockets */
        FD_ZERO(&rdfdset);
        FD_SET(usersockfd,&rdfdset);
        FD_SET(isosockfd,&rdfdset);
        if (select(FD_SETSIZE,&rdfdset,NULL,NULL,NULL) < 0)
            errorout("select failed");
        /* is the client sending data? */
        if (FD_ISSET(usersockfd,&rdfdset)) {
            if ((iolen = read(usersockfd,buf,sizeof(buf))) <= 0) {
                break; /* zero length means the client disconnected */
            }
            write(isosockfd,buf,iolen); /* copy to host -- blocking semantics */
        }
    
        /* is the host sending data? */
        if(FD_ISSET(isosockfd,&rdfdset)) {
            if((iolen = read(isosockfd,buf,sizeof(buf))) <= 0) {
                break; /* zero length means the host disconnected */
            }
            write(usersockfd,buf,iolen); /* copy to client -- blocking semantics */
        }
    }
    /* we're done with the sockets */
    close(isosockfd);
    close(usersockfd);
}


//displays an error message on the console and kills the current process.
void errorout (char *msg)
{
    FILE *console;
    console = fopen("/dev/console","a");
    fprintf(console,"proxyd: %s\r\n",msg);
    fclose(console);
    exit(1);
}
```