#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}//转换ASCII码值为对应字符


//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%4d%2d%2d", &year, &month, &day);//n是位数  % n d 
//	//20050709
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//加0使打印的一位数前补0，得07，不加得7
//	printf("day=%02d\n", day);//不加0得到一位数
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int id = 0;
//	float c = 0.0;
//	float m = 0.0f;//c++中不加f会默认double类型
//	float e = 0;
//	scanf("%d;%f,%f,%f", &id, &c, &m, &e);
//
//	printf("The each subject score of No. %d is %f, %f, %.2f.\n",id,c,m,e);
//	//% .2f是保留两位小数
//
//	return 0;
//}


//#include <stdio.h>
//int main()//输出打印   Hello world!  的返回值
//{
//	int n = printf("Hello world!");//加\n得到13，不是打印   Hello world!  的返回值，把\n也算上了
//	printf("\n%d\n", n);
//
//	return 0;
//}


//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//static修饰保持上一次的值
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
//}//每次加2


//#include <stdio.h>
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");//其中  \\n  转义\n。
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
//	////找最大值
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
//	printf("请输入半径(范围 0 <= r <= 15):");
//	scanf("%lf", &n);
//	double m = 4.0 / 3.0;//写成 4/3 会得到 1，应为4.0/3或4/3.0(或都写成小数)
//	double V = (m * t * n * n * n);
//	//double 比 float 更精确用 %lf
//	printf("%.3lf\n", V);
//
//}


#include <stdio.h>
int main()
{
	int h = 0;
	int w = 0;
	printf("请输入整数体重（公斤），身高（厘米）:");
	scanf("%d%d", &w, &h);
	
	float BMI = (float)w / (h/100.0 * h/100.0);
	printf("%.2f\n", BMI);

	return 0;

}