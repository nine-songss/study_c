#define _CRT_SECURE_NO_WARNINGS

static int g_val = 2022;//static修饰后这个全局变量的外部链接属性就变成内部链接属性。其他源文件就不能使用这个全局变量,保证变量安全性

static int Add(int x, int y)//类似上面
{
	return(x + y);
}