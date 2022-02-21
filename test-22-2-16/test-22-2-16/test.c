#include <stdio.h>

////用冒泡排序实现对整型数组的排序
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 15,3,2,4,6,5,7,9,8,10,-1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素个数
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)//打印数组
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}