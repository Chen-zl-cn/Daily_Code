#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//求出0-100000之间的所有水仙花数，并输出。“水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身。
//#include <stdio.h>
//
//int NumOfDigt(int a)//该函数返回一个数的位数，如输入153，返回3
//{
//	if (a == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		int num = 0;
//		while (a)
//		{
//			a /= 10;
//			num++;
//		}
//		return num;
//	}
//}
//
//int CiFang(int a, int num)//该函数功能为求a的num次方
//{
//	if (a == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int ret = 1;
//		while (num)
//		{
//			ret *= a;
//			num--;
//		}
//		return ret;
//	}
//}
//
//int SumOfNum(int a,int num)//该函数可以返回一个数的各位数的num次方之和，num为该数位数。如153，返回1^3+5^3+3^3的和
//{
//	if (a == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		int sum = 0;
//		for (i = 1; i <= num; i++)
//		{
//			int ret = a % 10;
//			sum += CiFang(ret, num);
//			a /= 10;
//		}
//		return sum;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int num = NumOfDigt(i);
//		int sum = SumOfNum(i, num);
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}





//求出0-100000之间的所有水仙花数，并输出。“水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身。


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1-要知道该数的数字个数
//		int tmp = i;
//		int num = 1;
//		while (tmp /= 10)
//		{
//			num++;
//		}
//		//2-要计算各个位的数字的次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, num);//pow返回的是一个double类型的数，sum是整型，可以强制类型转换一下
//			tmp /= 10;
//		}
//		//3-判断次方之和是否与该数本身相等
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////打印菱形(13,11)
//
//int main()
//{
//	int i = 0;
//	int left = 5, right = 7;
//	char arr[13] = { ' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ' };
//	while (left >= 0)
//	{
//		for (i = 0; i < 13; i++)
//		{
//			printf("%c", arr[i]);
//		}
//		printf("\n");
//		arr[left] = '*';
//		arr[right] = '*';
//		left--;
//		right++;
//	}
//	while (left < 6)
//	{
//		left++;
//		right--;
//		arr[left] = ' ';
//		arr[right] = ' ';
//		if (left > 0)
//		{
//			for (i = 0; i < 13; i++)
//			{
//				printf("%c", arr[i]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印'*'
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1l; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}