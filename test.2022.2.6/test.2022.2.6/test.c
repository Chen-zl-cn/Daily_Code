#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

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
//void menu()
//{
//	printf("############################\n");
//	printf("#### 1.Add ##### 2.Sub #####\n");
//	printf("#### 3.Mul ##### 4.Div #####\n");
//	printf("#### 5.根号      0.exit ####\n");
//	printf("############################\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数，用空格隔开:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数，用空格隔开:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数，用空格隔开:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数，用空格隔开:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 5:
//			printf("请输入一个操作数:>");
//			scanf("%d", &x);
//			double c = sqrt(x);
//			printf("%f\n", c);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { -4,-3,-2,-1,0,1,2,3,4,5 };//此处也可以用scanf获取用户输入的数字再放入数组
//	int i = 0;
//	int count_1 = 0;//统计正数的个数
//	int count_2 = 0;//统计0的个数
//	int count_3 = 0;//统计负数的个数
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > 0)
//		{
//			count_1++;
//		}
//		else if (arr[i] == 0)
//		{
//			count_2++;
//		}
//		else if (arr[i] < 0)
//		{
//			count_3++;
//		}
//	}
//	printf("正数的个数为%d,0的个数为%d,负数的个数为%d\n", count_1, count_2, count_3);
//	return 0;
//}


//unsigned fun6(unsigned num)
//{
//	unsigned k = 1;
//	do { k *= num % 10; num /= 10; } while (num);
//	return k;
//}
//
//main()
//{
//	unsigned n = 26;
//	printf("￥n");
//}


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
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void menu()
//{
//	printf("############################\n");
//	printf("#### 1.Add ##### 2.Sub #####\n");
//	printf("#### 3.Mul ##### 4.Div #####\n");
//	printf("#### 5.Xor       0.exit ####\n");
//	printf("############################\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	int(*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//此处的函数指针数组也就是用作转移表
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//
//	} while (input);
//	return 0;
//}


////回调函数简单例子
//
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
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void menu()
//{
//	printf("############################\n");
//	printf("#### 1.Add ##### 2.Sub #####\n");
//	printf("#### 3.Mul ##### 4.Div #####\n");
//	printf("#### 5.Xor       0.exit ####\n");
//	printf("############################\n");
//}
//
//void Calc(int(*p)(int, int))//该函数即为回调函数
//{
//	int x = 0, y = 0;
//	printf("请输入两个操作数，用空格隔开:>");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

void Fun() {};

int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//数组指针
	int(*pf)(int, int) = &Fun;//函数指针
	int(*pfArr[4])(int, int) = { pf };//函数指针数组
	int(*(*ppfArr)[4])(int, int) = &pfArr;//指向函数指针数组的指针
	return 0;
}