#include <stdio.h>

///////////////位域定义方法/////////////////////////////
/// struct 位域结构名
/// {
///     类型说明符1 位域名1:位域长度1; //最低位;
///     类型说明符2 位域名2:位域长度2; //次低位;
///     类型说明符3 位域名3:位域长度3;
///     ......
///     类型说明符N 位域名N:位域长度M; //最高位;   其中,N∈[0,1,2.....],M∈[0,系统支持位数];
/// };


//C 位域(从以下分析可以看出，位域在本质上就是一种结构类型，不过其成员是按二进位分配的。)
//如果程序的结构中包含多个开关量，只有 TRUE/FALSE 变量，如下：
//定义简单的结构体
struct {
    unsigned int widthValidated;  //4字节(32位)
    unsigned int heightValidated; //4字节(32位)
} status1;
//这种结构需要 8 字节的内存空间，但在实际上，在每个变量中，我们只存储 0 或 1。在这种情况下，
//C 语言提供了一种更好的利用内存空间的方式。如果您在结构内使用这样的变量，您可以定义变量的宽度来告诉编译器，您将只使用这些字节。


//定义位域结构
struct {
    unsigned int widthValidated: 1;  //1代表占用1个bit位
    unsigned int heightValidated: 1; //1代表占用1个bit位
} status2;

///(重点概念：)现在，上面的结构中，status2 变量将占用 4 个字节的内存空间，但是只有 2 位被用来存储值。
///(重点概念：)如果您用了 32 个变量，每一个变量宽度为 1 位，那么 status2 结构将使用 4 个字节，但只要您再多用一个变量，
///(重点概念：)如果使用了 33 个变量，那么它将分配内存的下一段来存储第 33 个变量，这个时候就开始使用 8 个字节。让我们看看下面的实例来理解这个概念：


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//带有预定义宽度的变量被称为位域。位域可以存储多于 1 位的数，例如，需要一个变量来存储从 0 到 7 的值，您可以定义一个宽度为 3 位的位域，如下：
struct {
    unsigned int age: 3; ///3代表占用的bit位
} Age;
//上面的结构定义指示 C 编译器，age 变量将只使用 3 位来存储这个值，如果您试图使用超过 3 位，则无法完成。

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//data变量将占用4个字节的内存空间，但是只有两个字节被用来存储值。其中位域 a 占 8 位，位域 b 占 2 位，位域 c 占 6 位。
struct BS {
    int a: 8;
    int b: 2;
    int c: 6;
} data;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//在这里，Packed_struct 包含了 6 个成员：四个 1 位的标识符 f1..f4、一个 4 位的 type 和一个 9 位的 my_int。
struct Packed_struct {
    unsigned int f1: 1;
    unsigned int f2: 1;
    unsigned int f3: 1;
    unsigned int f4: 1;
    unsigned int type: 4;
    unsigned int my_int: 9;
} pack;

////////////////////////////////////重要位域知识点////////////////////////////////////////////////////////////////////////////////////
///对于位域的定义尚有以下几点说明：

///①一个位域存储在同一个字节中，如一个字节所剩空间不够存放另一位域时，则会从下一单元起存放该位域。也可以有意使某位域从下一单元开始。例如：
///在这个位域定义中，a 占第一字节的 4 位，后 4 位填 0 表示不使用，b 从第二字节开始，占用 4 位，c 占用 4 位。
struct BBC {
    unsigned a: 4; //占用4个bit
    unsigned : 4;  //空域 (占用4个bit)
    unsigned b: 4; //从下一单元开始存放
    unsigned c: 4;
};

///②位域的宽度不能超过它所依附的数据类型的长度，成员变量都是有类型的，这个类型限制了成员变量的最大长度，: 后面的数字不能超过这个长度。

///③位域可以是无名位域，这时它只用来作填充或调整位置。无名的位域是不能使用的。例如：
struct k {
    int a: 1;
    int  : 2; ///该2位不能使用
    int b: 3;
    int c: 2;
};
///从以上分析可以看出，位域在本质上就是一种结构类型，不过其成员是按二进位分配的。


//位域的使用(位域的使用和结构成员的使用相同，其一般形式为：)
//位域变量名.位域名
//位域变量名->位域名
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int main() {

    printf("ppp sizeof : %d \n", sizeof(data));

    printf("%d \n", sizeof(status1)); //8字节
    printf("%d \n", sizeof(status2)); //4字节


    Age.age = 4;
    printf("sizeof : %d \n", sizeof(Age));//4字节
    printf("age=%d", Age.age);

    Age.age = 7;
    printf("age=%d", Age.age);

    Age.age = 8; //二进制标识1000有四位,超出定义的三位Bit
    printf("age=%d", Age.age);//打印：0

    void mmm();
    mmm();

    return 0;
}


//下例程序中定义了位域结构 bs，三个位域为 a、b、c。说明了 bs 类型的变量 bit 和指向 bs 类型的指针变量 pbit。这表示位域也是可以使用指针的。
void mmm() {
    struct netflix {
        unsigned a: 1;
        unsigned b: 3;
        unsigned c: 4;
    } bit, *pbit;
    bit.a = 1; //给位域赋值（应注意赋值不能超过该位域的允许范围）
    bit.b = 7; //给位域赋值（应注意赋值不能超过该位域的允许范围）
    bit.c = 15; //给位域赋值（应注意赋值不能超过该位域的允许范围）
    printf("%d,%d,%d\n", bit.a, bit.b, bit.c); //以整形量格式输出三个域的内容
    pbit = &bit; //把位域变量 bit 的地址送给指针变量 pbit
    pbit->a = 0; //用指针方式给位域 a 重新赋值，赋为 0
    pbit->b &= 3;//使用了复合的位运算符 "&="，相当于：pbit->b = pbit->b & 3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3）
    pbit->c |= 1;//使用了复合位运算符"|="，相当于：pbit->c = pbit->c | 1，其结果为 15
    printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);    // 用指针方式输出了这三个域的值
};
