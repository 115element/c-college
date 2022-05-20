#字符串变量的函数传递与指针传递
[重点： 
要想用指针传递参数，通过函数改变主函数中字符串指针变量的值，必须使用char**，也就是二级指针。
因为C语言函数总是接收参数的副本，函数接收的都是参数副本。]



#3.1 错误示范
先举个例子
```c++
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char* dst) {
        char* buf = (char*)malloc(20);
        memset(buf, 0, 20);
        strcpy(buf, "hello world!");
        dst = buf;
        puts(dst);
}

int main() {
        char* s = "123456";
        func(s);
        puts(s);
        return 0;
}
/*
本来想通过func函数改变s的值，结果并没有改变，还是输出123456
*/
```

```text
因为以前值传递和指针传递时用的例子是整型变量，参数传递时用一级指针就可以通过函数改变主函数中的变量的值。 
换成字符串变量，咋一看也是一级指针。

但是你要明白： 
字符串指针的定义是什么？ char* s； char* 本来就仅仅是一个字符串指针变量的类型！ s存的是一个字符串的首地址值，
所以你要通过函数改变字符串指针变量的值，就得用char**二级指针！

[因为C语言的函数总是接收参数的副本，请必须理解这句话，那么你就理解了上面这段话]
```



#3.2 正确姿势
```c++
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char **dst) {
    char *buf = (char *) malloc(20);
    memset(buf, 0, 20);
    strcpy(buf, "hello world!");
    *dst = buf;
    //puts(dst);
}

int main() {
    char *s = "123456";
    func(&s);
    puts(s);
    return 0;
}
```