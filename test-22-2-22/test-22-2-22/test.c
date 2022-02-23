#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>



//猜名次（五位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；B选手说：我第二，E第四；C选手说：我第一，D第二；D选手说：C最后，我第三；
//E选手说：我第四，A第一；比赛结束后，每位选手都说对了一半，请编程确定比赛的名次）
//int main()
//{
//	int a, b, c, d, e;
//	int y, u, i, o, p;
//	for (y = 1; y <= 5; y++)
//	{
//		a = y;
//		for (u = 1; u <= 5; u++)
//		{
//			if (u != y)
//			{
//				b = u;
//				for (i = 1; i <= 5; i++)
//				{
//					if (i != u && i != y)
//					{
//						c = i;
//						for (o = 1; o <= 5; o++)
//						{
//							if (o != i && o != u && o != y)
//							{
//								d = o;
//								for (p = 1; p <= 5; p++)
//								{
//									if (p != o && p != i && p != u && p != y)
//									{
//										e = p;
//										if ((b == 2) + (a == 3) == 1)
//										{
//											if ((b == 2) + (e == 4) == 1)
//											{
//												if ((c == 1) + (d == 2) == 1)
//												{
//													if ((c == 5) + (d == 3) == 1)
//													{
//														if ((e == 4) + (a == 1) == 1)
//														{
//															printf("排名为：a:%d,b:%d,c:%d,d:%d,e:%d\n", a, b, c, d, e);
//														}
//													}
//												}
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//
//	}
//	return 0;
//}


//实现一个函数可以左旋字符串中的k个字符（例如：ABCD左旋一个字符得到BCDA，ABCD左旋两个字符得到CDAB）

//直接求解法
//void left_move(char* p, int x, int sz)
//{
//	assert(p);
//	int i = 1;
//	for (i = 1; i <= x; i++)
//	{
//		int j = 0;
//		char tmp = *p;
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(p + j) = *(p + j + 1);
//		}
//		*(p + sz - 1) = tmp;
//	}
//}
//
//int main()
//{
//	int x = 0;
//	char arr[10];
//	printf("请输入要左旋的字符串:>");
//	scanf("%s", &arr);
//	printf("请输入要左旋的字符数量:>");
//	scanf("%d", &x);
//	int sz = strlen(arr);
//	left_move(arr, x, sz);
//	printf("%s", arr);
//	return 0;
//}

//三步翻转法
//abcdef
// 假设逆序字符数为2
//第一步，逆序左边：bacdef
//第二步：逆序右边：bafedc
//第三步，逆序整体：cdefab

//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int x, int len)
//{
//	assert(arr);
//	reverse(arr, arr + x - 1);
//	reverse(arr + x, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}

//int main()
//{
//	int x = 0;
//	char arr[10];
//	printf("请输入要左旋的字符串:>");
//	scanf("%s", &arr);
//	printf("请输入要左旋的字符数量:>");
//	scanf("%d", &x);
//	int len = strlen(arr);
//	assert(x < len);
//	left_move(arr, x, len);
//	printf("%s", arr);
//	return 0;
//}


//写一个函数判断一个字符串是否为另外一个字符串旋转之后的字符串（如：给定s1=AABCD和s2=BCDAA,返回1。给定s1=abcd和s2=ACBD,返回0）

//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int x, int len)
//{
//	assert(arr);
//	reverse(arr, arr + x - 1);
//	reverse(arr + x, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//int judge_str(char s1[], char s2[])
//{
//	assert(s1);
//	assert(s2);
//	int len_1 = strlen(s1);
//	int i = 0;
//	for (i = 0; i <= len_1; i++)
//	{
//		left_move(s1, 1, len_1);
//		if (strcmp(s1, s2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret = judge_str(s1, s2);
//	printf("%d", ret);
//}

//方法二
//给字符串1后面追加一个字符串1，也就是abcdefabcdef
// 那么在abcdefabcdef中就包含了abcedf所有左旋的情况
// 之后再从追加后的字符串中去寻找是否存在字符串2
// 若存在则证明可以左旋得到字符串2

//int is_left_move(char* str1, char* str2)
//{
//	int len_1 = strlen(str1);
//	int len_2 = strlen(str2);
//	if (len_1 != len_2)
//	{
//		return 0;
//	}
//	strncat(str1, str1, len_1);//在str1后面再追加一个str1
//	char* ret = strstr(str1, str2);//找子字符串的函数，从str1中找str2，返回指针，若为空则没找到
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char s1[30] = "abcdef";
//	char s2[] = "cdefab";
//	int ret = is_left_move(s1, s2);
//	printf("%d", ret);
//
//	return 0;
//}

//杨氏矩阵：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。要求：时间复杂度小于O（n）。

//对于以下矩阵
// 123
// 456
// 789
// 假设我们要找数字7，我们可以直接将其与第一行最大的数字相比较
// 7比三大，则排除第一行，而后用7与第二行最大的元素相比较，
// 7比六大，则排除第二行，最后再与9、8、7比较
//

//int FindNum(int arr[3][3], int f, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//
//	while (x <= col - 1 && y >= 0)
//	{
//		if (arr[x][y] > f)
//		{
//			y--;
//		}
//		else if (arr[x][y] < f)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

////重新设计函数，使其可以
//int FindNum(int arr[3][3], int f, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > f)
//		{
//			y--;
//		}
//		else if (arr[x][y] < f)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int f = 7;
//	//x,y传入后又带回了值，被称为返回型参数
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, f, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了,下标是%d,%d", x, y);
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}