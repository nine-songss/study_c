#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断
//	{
//		printf("%d", i);
//
//		i++;//调整
//	}
//
//	return 0;
//}


//for(表达式1 初始化 ;表达式2 判断 ;表达式3 调整 )

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (5 == i)
//		//	break;
//		//	continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char arr1[] = { 'a','b','c','d'};//不输入元素个数,超出打印会  “ ？”
	//char arr2[1] = { "abcd"};//应大于4，否则不能读取字符串结束标志 \0

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//	printf("%c ", arr1[i]);
	//	printf("%c ", arr2[i]);
	//}

	////for判断部分省略表示判断恒成立
	//for (;;)
	//{
	//	printf("hehe\n");
	//}//死循环

	//int i = 0;
	//for (; i < 10; i++)//省略初始化
	//{
	//	printf("hehe\n");
	//}

	int i = 0;
	int j = 0;
	for (;i<3;i++)
	{
		for (; j < 3; j++)//省略初始化j保持为第一次循环的3.
		{
			printf("hehe\n");
		}
	}

	return 0;
}