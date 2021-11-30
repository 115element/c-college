
#include <stdio.h>

int main() {

    double d[5]; //现在 balance 是一个可用的数组，可以容纳 5 个类型为 double 的数字。

    for (int i = 0; i < 5; ++i) {
        d[i] = i + 10.1;
    }
    for (int i = 0; i < 5; ++i) {
        printf("%lf \n", d[i]);
    }


    //如果您省略掉了数组的大小，数组的大小则为初始化时元素的个数。因此，如果：
    double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    for (int i = 0; i < 5; i++) {
        printf("%lf \n", balance[i]);
    }

    return 0;
}

