#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���!b0��ȫ!\n");//��Ŀ1


	float a;
	float b;
	scanf("%f%f", &a, &b);
	printf("%f+%f=%f\n", a, b, a + b);
	printf("%f-%f=%f\n", a, b, a - b);
	printf("%f*%f=%f\n", a, b, a * b);
	printf("%f/%f=%f\n", a, b, a / b);//��Ŀ2


	float c, d, e, m;
	scanf("%f%f%f", &c, &d, &e);
	if (c < d)m = c, c = d, d = m;
	if (d < e)m = d, d = e, e = m;
	if (c < d)m = c, c = d, d = m;
	printf("%f %f %f\n", c, d, e);//��Ŀ3


	int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("������\n");
	else
		printf("��������\n");//������


	return 0;
}