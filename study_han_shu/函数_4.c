#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>//整型有序数组二分查找
int binary_search(int arr[], int k, int sz)/*数组传参实际上传的是数组首
元素的地址，而不是整个数组，所以函数内部计算元素个数是不靠谱的*/
//此处形参arr是指针变量，通过首元素地址访问数组
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
	int ret = binary_search(arr, k, sz);//arr传参传的是首字母地址

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