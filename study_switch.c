#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//	case 3:
//		printf("星期三\n");
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//	case 6:
//		printf("星期六\n");
//	case 7:
//		printf("星期日\n");
//	}
//
//	return 0;
//}//case后必须是 整型,常量（字符存储ASCII值，属于整型）;break停止，否则按顺序持续走

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
	case 6:
	case 7:
		printf("weekend\n");

	default:
		printf("输入错误\n");//输入不属于1--7的反馈
	}

	return 0;
}