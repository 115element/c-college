/**
  1.数组的长度不能更改		

  2.为什么使用数组
	为了解决大量同类型的数据的存储和使用问题
	为了模拟现实世界

  a[25]		    可以描述一个线性的事物

  a[8][6]	    可以描述一个平面事物

  a[3][4][5]	可以描述一个立体的事物

**/

#include <iostream>

int main(void) {

    int a[5] = {1, 2, 3, 4, 5};
    //a是数组的名字，5表示数组元素的个数，并且5个元素分别用a[0],a[1],a[2],a[3],a[4]

    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    printf("%d\n", a[100]);
    return 0;
}

