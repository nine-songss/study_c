#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�ж�
//	{
//		printf("%d", i);
//
//		i++;//����
//	}
//
//	return 0;
//}


//for(���ʽ1 ��ʼ�� ;���ʽ2 �ж� ;���ʽ3 ���� )

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
	//char arr1[] = { 'a','b','c','d'};//������Ԫ�ظ���,������ӡ��  �� ����
	//char arr2[1] = { "abcd"};//Ӧ����4�������ܶ�ȡ�ַ���������־ \0

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//	printf("%c ", arr1[i]);
	//	printf("%c ", arr2[i]);
	//}

	////for�жϲ���ʡ�Ա�ʾ�жϺ����
	//for (;;)
	//{
	//	printf("hehe\n");
	//}//��ѭ��

	//int i = 0;
	//for (; i < 10; i++)//ʡ�Գ�ʼ��
	//{
	//	printf("hehe\n");
	//}

	int i = 0;
	int j = 0;
	for (;i<3;i++)
	{
		for (; j < 3; j++)//ʡ�Գ�ʼ��j����Ϊ��һ��ѭ����3.
		{
			printf("hehe\n");
		}
	}

	return 0;
}