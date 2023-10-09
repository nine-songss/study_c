#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
	int a = 0;
	int b = 0;
int Add()
{	
	scanf("%d %d", &a, &b);

	return (a+b);
}
int main()
{
	printf("%d\n", Add(a,b));
	return 0;
}