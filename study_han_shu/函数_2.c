#define _CRT_SECURE_NO_WARNINGS
//�ж�������������
#include <math.h>
#include <stdio.h>

//int main()
//{
//	int n = 0;
//	int a = 0;
//	for (a = 3; a <= 100; a+=2)//a++��a+=2
//	{
//		int i = 0;
//		int f = 1;
//		
//		//for (i = 2; i < a-1; i++)
//		for (i = 2; i <= sqrt(a); i++)//sqrt�ǿ�ƽ��
//		{
//			if (a % i == 0)
//			{
//				f = 0;
//				break;
//			}
//			
//		}
//		if (f == 1)
//		{
//			n++;
//			printf("%d ", a);
//		}
//		
//	}
//	printf("\n%d\n", n);
//
//	return 0;
//}

int S(int x)
{
	int i = 0;
	
	//for (i = 2; i < a-1; i++)
	for (i = 2; i <= sqrt(x); i++)//sqrt�ǿ�ƽ��
	{
		if (x % i == 0)
		{
			return 0;
			
		}

	}
	return 1;
}
int main()
{
	int n = 0;
	int a = 0;
	for (a = 3; a <= 100; a += 2)//a++��a+=2
	{

		if (S(a))//1Ϊ�棬0Ϊ��
		{
			n++;
			printf("%d ", a);
		}

	}
	printf("\n%d\n", n);

	return 0;
}