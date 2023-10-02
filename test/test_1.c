#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("你好!b0安全!\n");//题目1


	float a;
	float b;
	scanf("%f%f", &a, &b);
	printf("%f+%f=%f\n", a, b, a + b);
	printf("%f-%f=%f\n", a, b, a - b);
	printf("%f*%f=%f\n", a, b, a * b);
	printf("%f/%f=%f\n", a, b, a / b);//题目2


	float c, d, e, m;
	scanf("%f%f%f", &c, &d, &e);
	if (c < d)m = c, c = d, d = m;
	if (d < e)m = d, d = e, e = m;
	if (c < d)m = c, c = d, d = m;
	printf("%f %f %f\n", c, d, e);//题目3


	int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("是闰年\n");
	else
		printf("不是闰年\n");//附加题


	return 0;
}