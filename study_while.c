#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		i++;
//		if (5 == i)
//			//break;//���õ���ֹѭ��
//			continue;//��������Ĵ��룬ֱ���ж��Ƿ�����´�ѭ����i++Ӧ��ǰ
//
//		printf("%d\n", i);
//		
//	}
//
//	return 0;
//}


//int main()
//{
//	//int ch = getchar();//����ֵ��int����
//	//printf("%c\n", ch);
//	//putchar(ch);
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//
//	//char password[20] = { 0 };
//	//printf("����������:");
//	//scanf("%s", password);//scanf���ܶ�ȡ�пո���ַ�����ȡ�����뻺������\nǰ�Ķ�����ո�ǰ�Ķ���
//	////getchar();//�����������������ޣ�ֻ���߿ո�
//	//int ch = 0;
//	//while((ch=getchar())!='\n')
//	//{
//	//	;
//	//}
//	//printf("��ȷ������(Y/N):");
//	//int ret = getchar();//getchar��ȡһ���ַ���ȡ�������뻺����ʣ�µ�  \n��������Y
//	//if ('Y' == ret)
//	//{
//	//	printf("Yes\n");
//	//}
//	//else
//	//{
//	//	printf("No\n");
//	//}
//
//
//
//	return 0;
//}

int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')//ASCIIֵ�Ƚ�
			continue;
		putchar(ch);
	}

	return 0;
}//�������������������֣����������ַ�