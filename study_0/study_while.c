#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		i++;
//		if (5 == i)
//			//break;//永久的终止循环
//			continue;//跳过后面的代码，直接判断是否进行下次循环，i++应提前
//
//		printf("%d\n", i);
//		
//	}
//
//	return 0;
//}


//int main()
//{
//	//int ch = getchar();//返回值是int类型
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
//	//printf("请输入密码:");
//	//scanf("%s", password);//scanf不能读取有空格的字符串，取走输入缓冲区的\n前的东西或空格前的东西
//	////getchar();//清理缓冲区，能力有限，只拿走空格
//	//int ch = 0;
//	//while((ch=getchar())!='\n')
//	//{
//	//	;
//	//}
//	//printf("请确认密码(Y/N):");
//	//int ret = getchar();//getchar获取一个字符，取走了输入缓冲区剩下的  \n，不等于Y
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
		if (ch < '0' || ch>'9')//ASCII值比较
			continue;
		putchar(ch);
	}

	return 0;
}//这个代码作用是输出数字，跳过其他字符