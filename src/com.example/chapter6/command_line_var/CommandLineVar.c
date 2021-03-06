//C 命令行参数
//执行程序时，可以从命令行传值给 C 程序。这些值被称为命令行参数，它们对程序很重要，
//特别是当您想从外部控制程序，而不是在代码内对这些值进行硬编码时，就显得尤为重要了。
//
//命令行参数是使用 main() 函数参数来处理的，其中，argc 是指传入参数的个数，argv[] 是一个指针数组，指向传递给程序的每个参数。


///使用一个参数，编译并执行以下的代码，它会产生下列结果：
//  $./a.out testing
//  The argument supplied is testing
///使用两个参数，编译并执行以下的代码，它会产生下列结果：
//  $./a.out testing1 testing2
//  Too many arguments supplied.
///不传任何参数，编译并执行以下的代码，它会产生下列结果：
//  $./a.out
//  One argument expected


///以下两句话重点：：：：
/// 应当指出的是，argv[0] 存储程序的名称，argv[1] 是一个指向第一个命令行参数的指针，*argv[n] 是最后一个参数。
/// 如果没有提供任何参数，argc 将为 1，否则，如果传递了一个参数，argc 将被设置为 2。
///
/// 多个命令行参数之间用空格分隔，但是如果参数本身带有空格，那么传递参数的时候应把参数放置在双引号 "" 或单引号 '' 内部。
/// 让我们重新编写上面的实例，有一个空间，那么你可以通过这样的观点，把它们放在双引号或单引号""""。
/// 让我们重新编写上面的实例，向程序传递一个放置在双引号内部的命令行参数：


#include <stdio.h>


/// 应当指出的是，argv[0] 存储程序的名称，argv[1] 是一个指向第一个命令行参数的指针，*argv[n] 是最后一个参数。
/// 如果没有提供任何参数，argc 将为 1，否则，如果传递了一个参数，argc 将被设置为 2。
int main(int argc, char *argv[]) {

    printf("Program name %s\n", argv[0]);

    if (argc == 2) {
        printf("The argument supplied is %s \n", argv[1]);
    } else if (argc > 2) {
        printf("Too many arguments supplied.\n");
    } else {
        printf("One argument expected.\n");
    }
    return 0;
}





