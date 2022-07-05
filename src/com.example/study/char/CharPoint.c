#include <stdio.h>

int main(void) {

    char *p1, p2;

    char p11 = 'A';
    char p12 = 'B';
    p1 = &p11;
    p2 = p12;
    printf("%c \n", p11);
    printf("%c \n", p12);


//    char *p1,p2为啥不对？
//
//    相信不少同学在学完指针后尝试定义两个指针会这样写，并且编译没有错误，使用P1也没有问题，但尝试使用P2的时候可能会发现不对劲！
//
//    为什么呢，p2可能仅仅是个char类型的变量，并非是一个指针！
//
//    为何是这样，相信不少这么定义并且觉得正确的同学会有这样的理解，
//    那就是：char *属于类型，p1和p2是变量名，有何不妥呢？然而我们可能因为便于理解，
//    被教理解为：char 和*是一个整体，但事实上并非如此，C语言中这些定义是由两部分组成，
//    那就是基本类型和声明符，基本类型没什么疑问，重点是后面这个声明符，声明符并非是简单的一个变量名！
//    它除了包含标示符，也包含像*、[]、()这些东西！表明这个声明符里的这个变量它是这个类型的指针、或者是数组等等。
//    那么现在回到刚才这个问题，char *p1,p2来看，他们的基本类型都是char类型，标示符是p1,p2，
//    但他们的声明符就不一样了，一个是*p1，一个是p2.所以导致他们的意义不同的原因！
//
//    明白之后，我们想一句话定义多个指针类型的问题也就解决了！

    //如果想声明两个指针，那么可用以下方法哦
    char *aa, *bb;




    char a[] = "123456";
    printf("%s \n",a);

    int i1 = sizeof('a'); //返回4，你可能吃惊，为什么不是1，因为C语言的字符常量是int型
    int i2 = sizeof(char); //返回1
    int i3 = sizeof(int); //返回4
    printf("%d  %d  %d\n", i1, i2, i3);


    /// 有符号 char 数据范围  -128 ~ 127
    /// 无符号 char 数据范围  0 ~ 255
    char ii1 = 129;          //1000 0001  (char的范围是-128~127,输入129的话就会高位溢出，变成-127)
    int r1 = ii1+1; //-126
    unsigned char ii2 = 129; //1000 0001  (是129)
    int r2 = ii2+1; //130

    //C语言中直接写"123"代表是有符号字符串
    unsigned char* str = (unsigned char*)"123";

}