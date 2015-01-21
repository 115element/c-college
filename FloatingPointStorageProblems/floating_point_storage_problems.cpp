﻿// FloatingPointStorageProblems.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/**
  例子：
	(int)(4.5+2.2) 最终值是 6
	(float)(5)     最终值为5.000000

 浮点数的存储带来的问题
	float和double 都不能保证可以精确的存储一个小数

	获取一个小数的二进制
	12.5

	12连续除以2    1100
	0.5连续乘以2   1
	
	所以12.5的二进制是 1100.1
**/

#include <stdio.h>

int main(void)
{
	float i;
	float sum = 0;

	for (i = 1.0; i < 100; ++i)
	{
		sum = sum + 1 / i;

	}

	printf("sum = %f\n",sum);

	//判断浮点型变量x，是否为0
//	if (x和一个非常小的值相减所得数字的绝对值，小于这个非常小的值) {
//	    是0
//	}
//	else {
//	    不是0
//	}

	return 0;
}


