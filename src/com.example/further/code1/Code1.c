#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("chcp 65001");

    printf("hello world");

    int number;

    //printf() 输出字符串
    printf("输出一个整数：");

    //scanf() 格式化输入
    //scanf_s("%d", &number);
    scanf("%d", &number);

    //printf() 显示格式化输入
    printf("您输入的整数: %d \n", number);


    char c; //声明char变量
    c = 'A';
    printf("c 的值为 %c \n", c);


    float f;        //声明浮点数变量
    f = 12.0001234f; //定义浮点数变量
    printf("f的值为 %f \n", f);


    double d; //声明双精度变量
    d = 12.001234; //小数默认双精度
    printf("d的值为 %le", d);

    return 0;
}