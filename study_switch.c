#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//	case 3:
//		printf("������\n");
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//	case 6:
//		printf("������\n");
//	case 7:
//		printf("������\n");
//	}
//
//	return 0;
//}//case������� ����,�������ַ��洢ASCIIֵ���������ͣ�;breakֹͣ������˳�������

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
		printf("�������\n");//���벻����1--7�ķ���
	}

	return 0;
}