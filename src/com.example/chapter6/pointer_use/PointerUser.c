//学习 C 语言的指针既简单又有趣。通过指针，可以简化一些 C 编程任务的执行，还有一些任务，如动态内存分配，
//没有指针是无法执行的。所以，想要成为一名优秀的 C 程序员，学习指针是很有必要的。
//
//正如您所知道的，每一个变量都有一个内存位置，每一个内存位置都定义了可使用 & 运算符访问的地址，它表示了在内存中的一个地址。

#include <stdio.h>
#include <stdlib.h>

int main() {

    int var = 10;
    int *p; //定义指针变量
    p = &var;
    printf("memory address: %p \n", p);


    int *i;         //一个整形的指针
    double *dp;     //一个double型的指针
    float *fp;      //一个浮点型的指针
    char *ch;       //一个字符型的指针
    //所有实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，对应指针的值的类型都是一样的，都是一个代表内存地址的长的十六进制数。
    //不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。

    void pointer1();
    pointer1();

    void pointerNull();
    pointerNull();

    return 0;
}


void pointer1() {
    system("chcp 65001");

    int var = 20; //实际变量的声明
    int *ip; //指针变量的声明

    ip = &var; //在指针变量中存储var的地址
    printf("ip变量存储的地址 %p \n", ip);

    printf("ip变量的值 %d \n", *ip);
}


void pointerNull() {
    system("chcp 65001");
    int *ptr = NULL;
    printf("NULL的地址: %p \n", ptr); //结果是：0x0
    // 在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。
    // 然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。
    // 如需检查一个空指针，您可以使用 if 语句，如下所示


    //// 如果 p 非空，则完成
    if (ptr) {
        printf("not null");
    }
    //// 如果 p 为空，则完成
    if (!ptr) {
        printf("is null");
    }

//    if(expr)
//        无论"expr" 是任何表达式, 编译器本质上都会把它当
//    if((expr) != 0)

//    1、用 if(p), if(!p) 还是 if(p!=NULL), if(p==NULL) 都完全合法。
//    2、NULL一般被定义为0或(void*)0


//    C 指针详解
//    在 C 中，有很多指针相关的概念，这些概念都很简单，但是都很重要。下面列出了 C 程序员必须清楚的一些与指针相关的重要概念：
//
//    概念	            描述
//    指针的算术运算	    可以对指针进行四种算术运算：++、--、+、-
//    指针数组	        可以定义用来存储指针的数组。
//    指向指针的指针	    C 允许指向指针的指针。
//    传递指针给函数	    通过引用或地址传递参数，使传递的参数在调用函数中被改变。
//    从函数返回指针	    C 允许函数返回指针到局部变量、静态变量和动态内存分配。
}
