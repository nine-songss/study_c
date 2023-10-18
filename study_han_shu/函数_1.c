#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
void swap(int x, int y)//x,y是形参
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

void Swap(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

//当实参传递给形参，形参是实参的拷贝，对形参的修改不影响实参
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);

	printf("a=%d,b=%d\n", a, b);

	swap(a, b);//a,b是实参
	printf("a=%d,b=%d\n", a, b);

	Swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);

	return 0;
}


