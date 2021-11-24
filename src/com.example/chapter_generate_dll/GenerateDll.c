#include <stdio.h>

//如果要生成DLL文件，那么不能写main方法

void hello(void) {
    printf("hello dll!");
}


//如果要生成DLL或者Lib文件，那么不能写main方法
//int main() {
//    return 0;
//}
