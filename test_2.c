#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	if (a == 0)
	{
		printf("%d", a);
	}
	while (a != 0)
	{
		b = a % 10;
		printf("%d", b);
		a = a / 10;
	}

	return 0;
}