#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>



//�����Σ���λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����Bѡ��˵���ҵڶ���E���ģ�Cѡ��˵���ҵ�һ��D�ڶ���Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ������������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Σ�
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
//															printf("����Ϊ��a:%d,b:%d,c:%d,d:%d,e:%d\n", a, b, c, d, e);
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


//ʵ��һ���������������ַ����е�k���ַ������磺ABCD����һ���ַ��õ�BCDA��ABCD���������ַ��õ�CDAB��

//ֱ����ⷨ
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
//	printf("������Ҫ�������ַ���:>");
//	scanf("%s", &arr);
//	printf("������Ҫ�������ַ�����:>");
//	scanf("%d", &x);
//	int sz = strlen(arr);
//	left_move(arr, x, sz);
//	printf("%s", arr);
//	return 0;
//}

//������ת��
//abcdef
// ���������ַ���Ϊ2
//��һ����������ߣ�bacdef
//�ڶ����������ұߣ�bafedc
//���������������壺cdefab

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
//	printf("������Ҫ�������ַ���:>");
//	scanf("%s", &arr);
//	printf("������Ҫ�������ַ�����:>");
//	scanf("%d", &x);
//	int len = strlen(arr);
//	assert(x < len);
//	left_move(arr, x, len);
//	printf("%s", arr);
//	return 0;
//}


//дһ�������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ������磺����s1=AABCD��s2=BCDAA,����1������s1=abcd��s2=ACBD,����0��

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

//������
//���ַ���1����׷��һ���ַ���1��Ҳ����abcdefabcdef
// ��ô��abcdefabcdef�оͰ�����abcedf�������������
// ֮���ٴ�׷�Ӻ���ַ�����ȥѰ���Ƿ�����ַ���2
// ��������֤�����������õ��ַ���2

//int is_left_move(char* str1, char* str2)
//{
//	int len_1 = strlen(str1);
//	int len_2 = strlen(str2);
//	if (len_1 != len_2)
//	{
//		return 0;
//	}
//	strncat(str1, str1, len_1);//��str1������׷��һ��str1
//	char* ret = strstr(str1, str2);//�����ַ����ĺ�������str1����str2������ָ�룬��Ϊ����û�ҵ�
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

//���Ͼ�����һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�Ҫ��ʱ�临�Ӷ�С��O��n����

//�������¾���
// 123
// 456
// 789
// ��������Ҫ������7�����ǿ���ֱ�ӽ������һ������������Ƚ�
// 7���������ų���һ�У�������7��ڶ�������Ԫ����Ƚϣ�
// 7���������ų��ڶ��У��������9��8��7�Ƚ�
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

////������ƺ�����ʹ�����
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
//	//x,y������ִ�����ֵ������Ϊ�����Ͳ���
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, f, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���,�±���%d,%d", x, y);
//	}
//	else
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}