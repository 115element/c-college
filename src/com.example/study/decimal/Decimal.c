//java和c 默认小数类型都是double
#include <stdbool.h>

int main(void){

    float a = 1.1f;
    double b = 2.2;


    //在 C 语言标准(C89)没有定义布尔类型，所以 C 语言判断真假时以 0 为假，非 0 为真。
    //所以在最新的 C 语言标准(C99)解决了布尔类型的问题。C99 提供了 _Bool 型，所以布尔类型可以声明为 _Bool flag。
    //C99还提供了一个头文件 <stdbool.h> 定义了 bool 代表 _Bool，true 代表 1，false 代表 0。只要导入 stdbool.h ，
    // 就能非常方便的操作布尔类型了。
    bool boolean1 = true;
    bool boolean2 = false;



    return 0;
}