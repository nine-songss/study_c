#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void add()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = a + b;
	int* p=NULL;
	p = &c;
	a = *p;

	printf("%d\n", a);
}
int main()
{
	add();

	return 0;
}