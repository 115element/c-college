//C 可变参数
//有时，您可能会碰到这样的情况，您希望函数带有可变数量的参数，而不是预定义数量的参数。C 语言为这种情况提供了一个解决方案，它允许您定义一个函数，能根据具体的需求接受可变数量的参数。下面的实例演示了这种函数的定义。

#include <stdarg.h>
#include <stdio.h>

int main() {

    double average(int num, ...);
    double a = average(2, 1, 2);
    printf("%lf \n", a);

    double b = average(3, 1, 2, 3);
    printf("%lf \n", b);

    return 0;
}


/// 请注意，函数 func() 最后一个参数写成省略号，即三个点号（...），省略号之前的那个参数是 int，代表了要传递的可变参数的总数。
/// 为了使用这个功能，您需要使用 stdarg.h 头文件，该文件提供了实现可变参数功能的函数和宏。具体步骤如下：
///
/// 1、定义一个函数，最后一个参数为省略号，省略号前面可以设置自定义参数。
/// 2、在函数定义中创建一个 va_list 类型变量，该类型是在 stdarg.h 头文件中定义的。
/// 3、使用 int 参数和 va_start 宏来初始化 va_list 变量为一个参数列表。宏 va_start 是在 stdarg.h 头文件中定义的。
/// 4、使用 va_arg 宏和 va_list 变量来访问参数列表中的每个项。
/// 5、使用宏 va_end 来清理赋予 va_list 变量的内存。
int func(int count, ...) {}


double average(int num, ...) {
    va_list vaList;
    double sum = 0.0;

    //为num个参数初始化 valist
            va_start(vaList, num);

    //访问所有赋给 valist 的参数
    for (int j = 0; j < num; ++j) {
        sum += va_arg(vaList, int);
    }

    //清理为 valist 保留的内存
            va_end(vaList);

    return sum / num;
}