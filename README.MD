# C Program

- C Primer Plus

```text
C 语言是一种通用的、面向过程式的计算机程序设计语言。1972 年，为了移植与开发 UNIX 操作系统，丹尼斯·里奇在贝尔电话实验室设计开发了 C 语言。
C 语言是一种广泛使用的计算机语言，它与 Java 编程语言一样普及，二者在现代软件程序员之间都得到广泛使用。
当前最新的 C 语言标准为 C18 ，在它之前的 C 语言标准有 C17、C11...C99 等。
```

```text
C 语言是一种通用的高级语言，最初是由丹尼斯·里奇在贝尔实验室为开发 UNIX 操作系统而设计的。C 语言最开始是于 1972 年在 DEC PDP-11 计算机上被首次实现。
在 1978 年，布莱恩·柯林汉（Brian Kernighan）和丹尼斯·里奇（Dennis Ritchie）制作了 C 的第一个公开可用的描述，现在被称为 K&R 标准。
UNIX 操作系统，C编译器，和几乎所有的 UNIX 应用程序都是用 C 语言编写的。由于各种原因，C 语言现在已经成为一种广泛使用的专业语言。
```

```text
易于学习。
结构化语言。
它产生高效率的程序。
它可以处理底层的活动。
它可以在多种计算机平台上编译。
```

```text
C 语言是为了编写 UNIX 操作系统而被发明的。
C 语言是以 B 语言为基础的，B 语言大概是在 1970 年被引进的。
C 语言标准是于 1988 年由美国国家标准协会（ANSI，全称 American National Standard Institute）制定的。
截至 1973 年，UNIX 操作系统完全使用 C 语言编写。
目前，C 语言是最广泛使用的系统程序设计语言。
大多数先进的软件都是使用 C 语言实现的。
当今最流行的 Linux 操作系统和 RDBMS（Relational Database Management System：关系数据库管理系统） MySQL 都是使用 C 语言编写的。
```

```text
为什么要使用 C？
C 语言最初是用于系统开发工作，特别是组成操作系统的程序。由于 C 语言所产生的代码运行速度与汇编语言编写的代码运行速度几乎一样，所以采用 C 语言作为系统开发语言。下面列举几个使用 C 的实例：
- 操作系统
- 语言编译器
- 汇编器
- 文本编辑器
- 打印机
- 网络驱动器
- 现代程序
- 数据库
- 语言解释器
- 实体工具
```

```text
C 程序 
一个 C 语言程序，可以是 3 行，也可以是数百万行，它可以写在一个或多个扩展名为 ".c" 的文本文件中，例如，hello.c。您可以使用 "vi"、"vim" 或任何其他文本编辑器来编写您的 C 语言程序。
```

```text
C11
C11（也被称为C1X）指ISO标准ISO/IEC 9899:2011，是当前最新的C语言标准。在它之前的C语言标准为C99。
```

```text
标识符
C 标识符是用来标识变量、函数，或任何其他用户自定义项目的名称。一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。

C 标识符内不允许出现标点字符，比如 @、$ 和 %。C 是区分大小写的编程语言。
因此，在 C 中，Manpower 和 manpower 是两个不同的标识符。下面列出几个有效的标识符：
```

```text
关键字
下表列出了 C 中的保留字。这些保留字不能作为常量名、变量名或其他标识符名称。

关键字	        说明
auto	        声明自动变量
break	        跳出当前循环
case	        开关语句分支
char	        声明字符型变量或函数返回值类型
const	        定义常量，如果一个变量被 const 修饰，那么它的值就不能再被改变
continue	    结束当前循环，开始下一轮循环
default	        开关语句中的"其它"分支
do	            循环语句的循环体
double	        声明双精度浮点型变量或函数返回值类型
else	        条件语句否定分支（与 if 连用）
enum	        声明枚举类型
extern	        声明变量或函数是在其它文件或本文件的其他位置定义
float	        声明浮点型变量或函数返回值类型
for	            一种循环语句
goto	        无条件跳转语句
if	            条件语句
int	            声明整型变量或函数
long	        声明长整型变量或函数返回值类型
register	    声明寄存器变量
return	        子程序返回语句（可以带参数，也可不带参数）
short	        声明短整型变量或函数
signed	        声明有符号类型变量或函数
sizeof	        计算数据类型或变量长度（即所占字节数）
static	        声明静态变量
struct	        声明结构体类型
switch	        用于开关语句
typedef	        用以给数据类型取别名
unsigned	    声明无符号类型变量或函数
union	        声明共用体类型
void	        声明函数无返回值或无参数，声明无类型指针
volatile	    说明变量在程序执行中可被隐含地改变
while	        循环语句的循环条件
```


```text
void 类型
void 类型指定没有可用的值。它通常用于以下三种情况下：

序号	类型与描述
1-函数返回为空
        C 中有各种函数都不返回值，或者您可以说它们返回空。不返回值的函数的返回类型为空。例如 void exit (int status);
2-函数参数为空
        C 中有各种函数不接受任何参数。不带参数的函数可以接受一个 void。例如 int rand(void);
3-指针指向 void
        类型为 void * 的指针代表对象的地址，而不是类型。例如，内存分配函数 void *malloc( size_t size ); 返回指向 void 的指针，可以转换为任何数据类型。

```
