#pragma warning (disable:4819)

#include <stdio.h>

int main() {

    ///C语言数组必须指定大小

    int (*arrPtr)[10] = NULL; /// 一个指针，它指向一个有10个int元素的数组

    int *arrPt[10]; /// 如果没有括号，则声明 int*arrPtr[l0]；表示 arrPtr 是一个具有 10 个 int 类型指针的数组。

    return 0;
}