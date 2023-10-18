#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>//��������������ֲ���
int binary_search(int arr[], int k, int sz)/*���鴫��ʵ���ϴ�����������
Ԫ�صĵ�ַ���������������飬���Ժ����ڲ�����Ԫ�ظ����ǲ����׵�*/
//�˴��β�arr��ָ�������ͨ����Ԫ�ص�ַ��������
{
	int left = 0;
	int right = sz - 1;
	
	for (; left <= right;)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 9;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);//arr���δ���������ĸ��ַ

	if (ret == -1)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n%d\n", ret);
	}

	return 0;
}