#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}
int Y(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (Y(year))
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	return 0;
}