#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>



//字符指针的第一种用法
//int main()
//{
//	char a = 'w';
//	char* p = &a;
//	printf("%c\n", *p);
//	return 0;
//}

//字符指针的第二种用法
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef
//	return 0;
//}

//字符指针的第三种用法
//int main()
//{
//	const char* p = "abcdef";//在这里，"abcdef"是一个常量字符串，不可更改，建议在前面加个const
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组-指针数组
//	char* pch[5];//存放字符型指针的数组-指针数组
//	char (*p)[5] = &ch;//数组指针-指向ch数组
//	int(*p1)[10] = &arr;//数组指针，指向arr数组
//	int* (*p3)[4] = &parr;//数组指针，指向parr数组
//	return 0;
//}

//数组指针的使用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", ( * (p + i))[j]);//四种方法均可
//			//printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);//二维数组传参，是传的第一行数组的地址
//	return 0;
//}

//int main()
//{
//	int arr[5];//arr是一个整型数组，有五个元素
//	int* parr1[10];//parr1是一个指针数组，有10个元素，元素类型为int*
//	int(*parr2)[10];//parr2是一个数组指针，它指向的数组有10个元素，元素类型为int
//	int(*parr3[10])[5];//parr3是一个数组，有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，元素类型为整型
//	return 0;
//}


//二维数组传参，以下写法皆可
//void test(int arr[3][5])
//{}
//
//void test1(int arr[][5])
//{}
//
//void test2(int (*arr)[5])
//{}
//
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//	test1(arr);
//	test2(arr);
//	return 0;
//}

//二级指针传参
//以下方式皆可
//void test1(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//void test2(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//void test3(char** ptr)
//{}
//
//int main()
//{
//	int n = 0;
//	char* arr[10];
//	int* p = &n;
//	int** pp = &p;
//	test1(pp);
//	test2(&p);
//	test3(arr);
//	return 0;
//}

//函数指针-指向函数的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &Add);//输出结果一样，&函数名 和 函数名 都是函数的地址
//	printf("%p\n", Add);
//	int (*p)(int, int) = Add;//函数指针，第一个int是指函数返回类型，括号内两个int是指函数接收的参数类型
//	printf("%d", ( * p)(3, 5));//函数指针的使用
//	return 0;
//}

//函数指针使用案例

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello");
//	return 0;
//}

//简析以下代码
//void(*signal(int, void(*)(int)))(int);
//signal是一个函数声明，其参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数参数为int，返回值为空

//简化
//typedef void(*pfun_t)(int);//将void(*)(int)类型命名为pfun_t
//pfun_t signal(int, pfun_t);

//函数指针数组

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	while (*dest++ = *src++)
//	{
//	}
//	return ret;
//}
//
//int main()
//{
//	char a[] = "hello";
//	char b[] = "########";
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pArr[4])(char*, const char*) = { my_strcpy };
//	(*pf)(b, a);
//	printf("%s", b);
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("############################\n");
	printf("#### 1.Add ##### 2.Sub #####\n");
	printf("#### 3.Mul ##### 4.Div #####\n");
	printf("#### 5.根号      0.exit ####\n");
	printf("############################\n");
}

int main()
{
	int input = 0;
	int x = 0, y = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数，用空格隔开:>");
			scanf("%d %d", &x, &y);
			printf("%d\n", Add(x,y));
			break;
		case 2:
			printf("请输入两个操作数，用空格隔开:>");
			scanf("%d %d", &x, &y);
			printf("%d\n", Sub(x,y));
			break;
		case 3:
			printf("请输入两个操作数，用空格隔开:>");
			scanf("%d %d", &x, &y);
			printf("%d\n", Mul(x,y));
			break;
		case 4:
			printf("请输入两个操作数，用空格隔开:>");
			scanf("%d %d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 5:
			printf("请输入一个操作数:>");
			scanf("%d", &x);
			double c = sqrt(x);
			printf("%f\n", c);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}
