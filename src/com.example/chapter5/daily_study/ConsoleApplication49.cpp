#include <stdio.h>

void f();
void g();
void k();

void f() {
	printf("FFFFFF\n");
	g();
}

void g() {
	printf("GGGGGG\n");
}

void k() {
	printf("KKKKKK\n");
}

int main(void)
{
	return 0;
}


