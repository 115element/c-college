#include "PrintlfDemo.h"
// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main(void)
{
    int i = 88;
    printf("i = %d\n",i);
    /*
    printf用法：
    %d 表示以十进制输出
    %x或%X表示以十六进制输出
    %o表示以八进制输出

    */

    /**
    整数
        十进制:传统写法
        十六进制：前面加0x或0X
        八进制：前面加0 注意是数字零不是字母o

    浮点数
        传统的写法
            float x = 3.2; //传统
        科学计数法
            e表示的是10 ，e3表示e的三次方，e-2表示e的-2次方
            float x = 3.2e3; //x的值是3200
            float x = 123.45e-2; //x的值是1.2345

    字符
        单个字符用单引号括起来
            'A'表示字符A
            'AB' 错误
            "AB" 正确
        字符串用双引号括起来
            "A"正确，因为"A"代表了'A' '\0'的组合



    **/

    return 0;
}


