#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int m = 0;
	int a = 1;
	int b = 0;
	int c = 2147483647;//int�������ֵ
	int max = 0;
	int min = 0;
	while (a != 0)
	{
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		if(a>=b)
		{
			max = a;
		}
		b = max;
		if (a <=c)
		{
			min = a;
		}
		c = min;

		m++;
	}
	printf("NΪ%d\n", m);
	printf("���ֵΪ%d\n", max);
	printf("��СֵΪ%d\n", min);

	return 0;
}


