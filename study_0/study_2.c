//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");
//
//	return 0;
//}//没有结果，else和最近的if匹配，if条件句用{}的重要性。


//int test()
//{
//	int a = 3;
//	if (a == 3)
//		return 1;
//	return 0;
//}
//int main()
//{
//	printf("%d\n",test());
//
//	return 0;
//}//得到1，return完成相当于函数结束。


//int main()
//{
//	int num = 5;
//	if (5 == num)//写(5 == num)相当于(num == 5)，这样少写等号时会报错，gogogo!!!
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	//判断奇数
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 0)
//		printf("不是奇数\n");
//	else
//		printf("是奇数\n");
//
//	return 0;
//}


//输出1--100的奇数

//int main()
//{
//	int b = 1;
//	while (b <= 100)
//	{
//		if (b % 2 != 0)
//		{
//			printf("%d\n", b);
//		}
//		b++;
//	}
//
//	return 0;
//}