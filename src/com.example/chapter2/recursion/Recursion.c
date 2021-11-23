#include <stdio.h>

int f(int n) {
	n += 2;
	return n;
}

int main(void)
{
	int val;
	val = f(5);
	printf("val = %d\n",val);

	return 0;
}


