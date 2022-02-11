
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//int test_1_cmp_int(const void* e1,const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//void test_1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), test_1_cmp_int);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

int test_2_cmp_float(const void* e1, const void* e2)
{
	return (int)(*((float*)e1) - *((float*)e2));
}
//
//void test_2()
//{
//	float arr[] = { 5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), test_2_cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////int test_3_cmp_stu_by_age(const void* e1, const void* e2)
////{
////	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
//
//int test_3_cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test_3()
//{
//	struct Stu s[3] = { {"zhangsan",50},{"lisi",30},{"wangwu",40} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), test_3_cmp_stu_by_name);
//	//第一个参数为待排序数组的首元素地址
//	//第二个参数为待排序数组的元素个数
//	//第三个参数为待排序数组的每个元素的大小——单位为字节
//	//第四个参数是函数指针，比较两个元素的函数的地址——这个函数时使用者自己实现
//	//函数指针的两个参数是：带比较的两个元素的地址
//}
//
//int main()
//{
//	//test_1();//用qsort排序整型数组
//	//test_2();//用qsort排序浮点型数组
//	test_3();//用qsort排序结构体数组
//	return 0;
//}

//int cmp_int(const void* e1,const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}

void Swap(char* p, char* p1, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *p;
		*p = *p1;
		*p1 = tmp;
		p++;
		p1++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ((cmp((char*)base + j * width, (char*)base + (j + 1) * width)) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test_4()
{
	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);*/
	float arr[] = { 5.0,4.0,3.0,2.0,1.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), test_2_cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
}


int main()
{
	test_4();//编写一个能够排序任意数组的bubble_sort()函数
	return 0;
}