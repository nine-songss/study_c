#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
void swap(int x, int y)//x,y���β�
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

//��ʵ�δ��ݸ��βΣ��β���ʵ�εĿ��������βε��޸Ĳ�Ӱ��ʵ��
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);

	printf("a=%d,b=%d\n", a, b);

	swap(a, b);//a,b��ʵ��
	printf("a=%d,b=%d\n", a, b);

	Swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);

	return 0;
}


