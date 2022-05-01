#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//动态内存分配
//int main()
//{
//	//向内存申请十个整形空间
//	int* p = (int*)malloc(10 * sizeof(int));//如果开辟成功，返回开辟好空间的void*类型指针，开辟失败返回NULL指针
//	if(p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候，就应该还给操作系统，free(p)
//	free(p);//该函数只能用来释放malloc开辟的空间，不然行为未定义
//	p = NULL;//指针指向的地方已经还给操作系统了，故需要给指针置空
//	return 0;
//}

////calloc函数,会自动初始化0
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}	
//	free(p);
//	p = NULL;
//	return 0;
//}

////realloc函数
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//以上为在使用malloc开辟的空间
//	//如果上面开辟的20个字节空间不够使用，则可以用realloc来调整动态开辟的内存
//	//realloc函数注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块新的满足需求的空间，并且把原来的数据拷贝过来，释放旧的空间
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//注意：
// 1.对动态开辟内存后返回的指针必须要判断其是否为空
// 2.对动态内存开辟的空间不能越界访问
// 3.不能对非动态内存开辟的指针使用free
// 4.使用free释放动态开辟内存的一部分，如下代码中的free(p)
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//free(p);
//	return 0;
//}
//5.对同一块动态内存进行多次释放
//6.动态开辟内存忘记释放（内存泄漏）
//

//柔性数组——C99中，结构中的最后一个元素允许是未知大小的数组，这就叫做‘柔性数组’成员
// 结构中的柔性数组成员前面至少一个其他成员
//写法一
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员，数组大小可变
//};//在计算结构体类型大小时，不包括柔性数组
////写法二
//struct S1
//{
//	int n;
//	int arr[0];
//};
//
//int main()
//{
//	struct S s;
//	return 0;
//}

//柔性数组用法
//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	printf("\n");
//	//扩大数组
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+ 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		ps = ptr;
//		ptr = NULL;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//用指针实现柔性数组功能
struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		ps->arr = (int*)malloc(5 * sizeof(int));
		if (ps->arr == NULL)
		{
			printf("%s\n", strerror(errno));
		}
		else
		{
			int i = 0;
			for (i = 0; i < 5; i++)
			{
				ps->arr[i] = i;
				//printf("%d ", ps->arr[i]);
			}
			//调整大小
			int* ptr = (int*)realloc(ps->arr,10 * sizeof(int));
			if (ptr == NULL)
			{
				printf("%s\n", strerror(errno));
			}
			else
			{
				ps->arr = ptr;
				for (i = 5; i < 10; i++)
				{
					ps->arr[i] = i;
				}
				for (i = 0; i < 10; i++)
				{
					printf("%d ", ps->arr[i]);
				}
			}
		}
	}
	return 0;
}