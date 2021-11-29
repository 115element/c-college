#include <stdio.h>
#include<windows.h>
#include <stdlib.h>

int main() {

    int a = 21;
    int b = 20;
    int c;

    c = a / b;
    printf("%d \n", c);


    c = a % b;
    printf("%d \n", c);


    c = a++;
    printf("%d \n", c);

    c = a--;
    printf("%d \n", c);


    return 0;
}

