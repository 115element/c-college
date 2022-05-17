#include <stdio.h>

int main(void) {

    //问：以下的初始化有什么区别？
    char a[] = "string literal";
    char *p = "string literal";

    //当我向p[i]赋值的时候，我的程序崩溃了



    void s1();
    s1();

    void s2();
    s2();
}


//判断高字节在前还是低字节在前
void s1() {
    int x = 1;
    if (*(char *) &x == 1) {
        printf("little - endian\n");
        //小端模式：是指一个数据的低位字节序内容存放在低地址处，高位字节序的内容存放在高地址处。
    } else {
        printf("big - endian\n");
        //大端模式：是指一个数据的低位字节序的内容放在高地址处，高位字节序存的内容放在低地址处。
    }
}

void s2() {
    union {
        int i;
        char c[sizeof(int)]
    } x;

    x.i = 1;
    if (x.c[0] == 1) {
        printf("little - endian\n");
    } else {
        printf("big - endian\n");
    }
}


