#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    system("chcp 65001");

    printf("hello world");

    int number;

    //printf() 输出字符串
    printf("输出一个整数：");

    //scanf() 格式化输入
    scanf_s("%d", &number);

    //printf() 显示格式化输入
    printf("您输入的整数是: %d", number);

    return 0;
}