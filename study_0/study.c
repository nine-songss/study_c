#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define MAX 100
//#define STR "abcde"

//枚举常量(颜色，性别...）
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
//	//int len = strlen(arr1);//strlen未定义头文件string.h
//	//printf("%d\n", len);
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}



//转义字符
//三字母词:??)=],用\?防止
//\'='

//%d整型
//%c字符
//%s字符串
//%f-float
//%lf-double
//%zu-sizeof

//int main()
//{
//	//printf("abcd\\0ef");//abcd\0ef
//
//	//printf("\a");//警告，电脑响
//
//	//printf("abc\tde	f");//\t=Tab
//	//printf("%c\n",' \130');//八进制，0*8**0+3*8**1+1*8**2=88
//	//printf("%c\n",'\x60');//十六进制，=99[ASCII值]
//	
//	//printf("%d\n", strlen("abcde\tf"));
//	////\b是退格符
//
//	return 0;
//}


//条件
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input == 1)
//	{	printf("offer");
//	} 
//	return 0;
//}

//循环
//int main()
//{
//	int line = 0;
//	printf("加入\n");
//
//	while (line < 20)
//	{	printf("写:%d\n", line);//大括号不要去
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


////函数
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


////数组
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


//0-数字0
//'0'-字符-ASCII值是48
//'\0'-字符-ASSCII值是0
//EDF-end of file文件结束标志 值是-1


//#include <stdio.h>
//#include <string.h>
//int main ()
//{
//	char arr[] = {'b','i','t'};
//	//方框放3或不放得随机数，放4得3（不完全初始化）
//	printf("%d\n", strlen(arr));
//	char arr1[] = { "bit" };//printf 得3
//	return 0;
//}
////数组方框中应为常量


////制作一个比大小的函数
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


////练习
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
//	//printf("%d\n", sizeof(arr));//数组大小，单位字节
//	//printf("%d\n", sizeof(arr[0]));
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组元素个数
//
//	//int a = 10;
//	//int b = a++;//先使用后++,b=a=10,a=11
//	//int c = 10;
//	//int d = ++c;//先++后使用,c=11,d=c=11
//	//printf("%d,%d\n", a, b);//11,10
//	//printf("%d,%d\n", c, d);//11,11
//
//	////3.14字面浮点数，默认double型
//	//int a = (int)3.14;
//	//printf("%d\n", a);//得到3
//
//	//int a = 0;
//	//int b = 10;
//	//if (a && b)
//	//{
//	//	printf("hh\n");//不打印，a!=0时才打印
//	//}
//
//	//int a = 10;
//	//int b = 20;
//	//int c = a > b ? a : b;//三目操作符，exp1 ? exp2 : exp3,先判断1，1为真则执行2，1为假则执行3.
//	//printf("%d\n", c);//20
//
//	return 0;
//}


////逗号表达式，从左到右依次计算，整个表达式结果是最后一个表达式的结果
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


//关键字

//typedef unsigned int uint;//typedef类型重命名
//int main()
//{
//	//auto int a = 10;//auto是自动变量，一般省略
//
//	unsigned int num = 0;
//	uint num1 = 0;//等价于上一行
//
//	return 0;
//}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

////1.
//void test()
//{
//	static int a = 1;//static修饰局部变量出作用域不销毁，有得到2-11，无得到十个2
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
//extern int g_val;//add文件中用static修饰则不能在此文件使用
//int main()
//{
//	printf("%d\n", g_val);//g_val全局变量
//
//	return 0;
//}

////3.
//extern int Add(int x, int y);//类似2.中，函数在add文件有static修饰则不能在此使用
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
//	//寄存器变量,读取快
//	register int num = 3;//建议3放在寄存中，由编译器决定，
//
//	return 0;
//}


//#define NUM 100//定义标识符常量
//
//#define ADD(x,y) x+y//定义宏,函数表示如下
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
//	int c = ADD(a, b);//替换作用，int c=a+b
//	printf("%d\n", c);
//
//	return 0;
//}


//指针,指针就是地址,口头指针一般为指针变量

//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	&a;//取地址，运行一次创建一次，地址不固定
//	printf("%p\n", &a);
//	int* p = &a;
//	//p就是指针变量，存放指针(地址)的变量
//	//*说明p是指针变量，int说明p指向的对象 a 是int类型的
//	*p;//解引用操作符*，通过p中存放的地址，找到p指向的对象，*p就是p指向的对象（即*p=a）
//	printf("%d\n", *p);
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;

//不管什么类型的指针都是在创建指针变量，指针(变量)大小，32位为4个字节，64位为8个字节

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


//结构体
//人：姓名+年龄+性别+地址+电话

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
//	//结构体对象.成员名
//	printf("%s,%d,%s,%s\n",s.name,s.age,s.sex,s.tele);
//
//	print(&s);
//
//	return 0;
//}


//练习

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

