#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define MAX 100
//#define STR "abcde"

//ö�ٳ���(��ɫ���Ա�...��
//enum color
//{
//	red,
//	green,
//	biue
//};
//int main()
//{
//	enum color c = red;
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//
//	//int len = strlen(arr1);//strlenδ����ͷ�ļ�string.h
//	//printf("%d\n", len);
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}



//ת���ַ�
//����ĸ��:??)=],��\?��ֹ
//\'='

//%d����
//%c�ַ�
//%s�ַ���
//%f-float
//%lf-double
//%zu-sizeof

//int main()
//{
//	//printf("abcd\\0ef");//abcd\0ef
//
//	//printf("\a");//���棬������
//
//	//printf("abc\tde	f");//\t=Tab
//	//printf("%c\n",' \130');//�˽��ƣ�0*8**0+3*8**1+1*8**2=88
//	//printf("%c\n",'\x60');//ʮ�����ƣ�=99[ASCIIֵ]
//	
//	//printf("%d\n", strlen("abcde\tf"));
//	////\b���˸��
//
//	return 0;
//}


//����
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input == 1)
//	{	printf("offer");
//	} 
//	return 0;
//}

//ѭ��
//int main()
//{
//	int line = 0;
//	printf("����\n");
//
//	while (line < 20)
//	{	printf("д:%d\n", line);//�����Ų�Ҫȥ
//		line++;
//	}
//	if (line == 20)
//	{
//		printf("offer\n");
//	}
//
//
//	return 0;
//}


////����
//int Add(int x,int y)
//{
//	//int z;
//	//z = x + y;
//	//return z;
// return (x+y);
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}


////����
//int main()
//{
//	//int a = 0;
//	//int b = 1;
//	//....
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	char ch[5];
//	double d[30];
//
//	printf("%d\n", arr[8]);
//	int i=0;
//	while (i < 9)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//0-����0
//'0'-�ַ�-ASCIIֵ��48
//'\0'-�ַ�-ASSCIIֵ��0
//EDF-end of file�ļ�������־ ֵ��-1


//#include <stdio.h>
//#include <string.h>
//int main ()
//{
//	char arr[] = {'b','i','t'};
//	//�����3�򲻷ŵ����������4��3������ȫ��ʼ����
//	printf("%d\n", strlen(arr));
//	char arr1[] = { "bit" };//printf ��3
//	return 0;
//}
////���鷽����ӦΪ����


////����һ���ȴ�С�ĺ���
//int compare(float x, float y)
//{
//	float z;
//	if (x > y)
//	{
//		z = x;
//	}
//	else if (y > x)
//	{
//		z = y;
//	}
//	else { z = x; }
//	return z;
//}
//int main()
//{
//	float a, b;
//	scanf("%f%f", &a, &b);
//	float c = compare(a, b);
//	printf("%f\n",c);
//
//	return 0;
//
//}


////��ϰ
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		printf("1\n");
//	}
//	if (x == 0)
//	{
//		printf("0\n");
//	}
//	if(x>0)
//	{ printf("-1\n"); }
//
//	return 0;
//}


//int main()
//{
//	//int arr[10] = {0};
//	//printf("%d\n", sizeof(arr));//�����С����λ�ֽ�
//	//printf("%d\n", sizeof(arr[0]));
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//����Ԫ�ظ���
//
//	//int a = 10;
//	//int b = a++;//��ʹ�ú�++,b=a=10,a=11
//	//int c = 10;
//	//int d = ++c;//��++��ʹ��,c=11,d=c=11
//	//printf("%d,%d\n", a, b);//11,10
//	//printf("%d,%d\n", c, d);//11,11
//
//	////3.14���渡������Ĭ��double��
//	//int a = (int)3.14;
//	//printf("%d\n", a);//�õ�3
//
//	//int a = 0;
//	//int b = 10;
//	//if (a && b)
//	//{
//	//	printf("hh\n");//����ӡ��a!=0ʱ�Ŵ�ӡ
//	//}
//
//	//int a = 10;
//	//int b = 20;
//	//int c = a > b ? a : b;//��Ŀ��������exp1 ? exp2 : exp3,���ж�1��1Ϊ����ִ��2��1Ϊ����ִ��3.
//	//printf("%d\n", c);//20
//
//	return 0;
//}


////���ű��ʽ�����������μ��㣬�������ʽ��������һ�����ʽ�Ľ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 3, b = a + 2, c = c + a);
//	printf("%d\n", d);//d=a-3+a=17
//
//	return 0;
//}


//�ؼ���

//typedef unsigned int uint;//typedef����������
//int main()
//{
//	//auto int a = 10;//auto���Զ�������һ��ʡ��
//
//	unsigned int num = 0;
//	uint num1 = 0;//�ȼ�����һ��
//
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

////1.
//void test()
//{
//	static int a = 1;//static���ξֲ����������������٣��еõ�2-11���޵õ�ʮ��2
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i=0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//}

////2.
//extern int g_val;//add�ļ�����static���������ڴ��ļ�ʹ��
//int main()
//{
//	printf("%d\n", g_val);//g_valȫ�ֱ���
//
//	return 0;
//}

////3.
//extern int Add(int x, int y);//����2.�У�������add�ļ���static���������ڴ�ʹ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}


//int main()
//{
//	//�Ĵ�������,��ȡ��
//	register int num = 3;//����3���ڼĴ��У��ɱ�����������
//
//	return 0;
//}


//#define NUM 100//�����ʶ������
//
//#define ADD(x,y) x+y//�����,������ʾ����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);//�滻���ã�int c=a+b
//	printf("%d\n", c);
//
//	return 0;
//}


//ָ��,ָ����ǵ�ַ,��ͷָ��һ��Ϊָ�����

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	&a;//ȡ��ַ������һ�δ���һ�Σ���ַ���̶�
//	printf("%p\n", &a);
//	int* p = &a;
//	//p����ָ����������ָ��(��ַ)�ı���
//	//*˵��p��ָ�������int˵��pָ��Ķ��� a ��int���͵�
//	*p;//�����ò�����*��ͨ��p�д�ŵĵ�ַ���ҵ�pָ��Ķ���*p����pָ��Ķ��󣨼�*p=a��
//	printf("%d\n", *p);
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;

//����ʲô���͵�ָ�붼���ڴ���ָ�������ָ��(����)��С��32λΪ4���ֽڣ�64λΪ8���ֽ�

//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//
//	return 0;
//}


//�ṹ��
//�ˣ�����+����+�Ա�+��ַ+�绰

//struct student
//{
//	char name[20];
//	int age;
//	char sex[9];
//	char tele[];
//};
//void print(struct student* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct student s = { "zhangsan",18,"nan","16669698998" };
//
//	//�ṹ�����.��Ա��
//	printf("%s,%d,%s,%s\n",s.name,s.age,s.sex,s.tele);
//
//	print(&s);
//
//	return 0;
//}


//��ϰ

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a > 0 && b < 10000 && a < 10000 && b>0)
//	{
//		printf("%d %d\n", a / b, a % b);
//	}
//
//	return 0;
//}

