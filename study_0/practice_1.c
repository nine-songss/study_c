#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}//ת��ASCII��ֵΪ��Ӧ�ַ�


//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%4d%2d%2d", &year, &month, &day);//n��λ��  % n d 
//	//20050709
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//��0ʹ��ӡ��һλ��ǰ��0����07�����ӵ�7
//	printf("day=%02d\n", day);//����0�õ�һλ��
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int id = 0;
//	float c = 0.0;
//	float m = 0.0f;//c++�в���f��Ĭ��double����
//	float e = 0;
//	scanf("%d;%f,%f,%f", &id, &c, &m, &e);
//
//	printf("The each subject score of No. %d is %f, %f, %.2f.\n",id,c,m,e);
//	//% .2f�Ǳ�����λС��
//
//	return 0;
//}


//#include <stdio.h>
//int main()//�����ӡ   Hello world!  �ķ���ֵ
//{
//	int n = printf("Hello world!");//��\n�õ�13�����Ǵ�ӡ   Hello world!  �ķ���ֵ����\nҲ������
//	printf("\n%d\n", n);
//
//	return 0;
//}


//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//static���α�����һ�ε�ֵ
//	c += 1;//c=c+1
//	b += 2;//b=b+2
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));
//	}
//
//	return 0;
//}//ÿ�μ�2


//#include <stdio.h>
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");//����  \\n  ת��\n��
//	printf("cout<<\"Hello world!\"<<endl;\n");
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//int a = 0;
//	//int b = 0; 
//	//int c = 0;
//	//int d = 0;
//	//int m = 0;
//	//scanf("%d %d %d %d", &a, &b, &c, &d);
//	//if (a >= b)
//	//{
//	//	m = a;
//	//}
//	//else
//	//	m = b;
//	//if (m >= c)
//	//{
//	//}
//	//else
//	//	m = c;
//	//if (m >= d)
//	//{
//	//}
//	//else
//	//	m = d;
//	//printf("%d\n", m);
//
//	//int arr[99] = { 0 };
//	//int i = 0;
//	//while (i < 4)
//	//{
//	//	scanf("%d", &arr[i]);
//	//	i++;
//
//	//}
//	////�����ֵ
//	//int max = arr[0];
//	//i = 1;
//	//while (i < 4)
//	//{
//	//	if (arr[i] > max)
//	//	{
//	//		max = arr[i];
//	//		
//	//	}
//	//	i++;
//	//}
//	//printf("%d\n", max);
//
//	int m = 0;
//	int max = 0;
//	int i = 0;
//	
//	while (i < 4)
//	{
//		scanf("%d", &m);
//
//		if (m > max)
//		{
//			max = m;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//	
//}


//#include <stdio.h>
//int main()
//{
//	double t = 3.1415926;
//	double n = 0.0;
//	printf("������뾶(��Χ 0 <= r <= 15):");
//	scanf("%lf", &n);
//	double m = 4.0 / 3.0;//д�� 4/3 ��õ� 1��ӦΪ4.0/3��4/3.0(��д��С��)
//	double V = (m * t * n * n * n);
//	//double �� float ����ȷ�� %lf
//	printf("%.3lf\n", V);
//
//}


#include <stdio.h>
int main()
{
	int h = 0;
	int w = 0;
	printf("�������������أ��������ߣ����ף�:");
	scanf("%d%d", &w, &h);
	
	float BMI = (float)w / (h/100.0 * h/100.0);
	printf("%.2f\n", BMI);

	return 0;

}