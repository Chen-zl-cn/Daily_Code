#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>



//现在的调查问卷越来越多了，所以出现了很多人恶意刷问卷的情况，
//已知某问卷需要填写名字，如果名字仅由大小写英文字母组成且长度不超过10，
//则我们认为这个名字是真实有效的，否则就判定为恶意填写问卷。
//请你判断出由多少有效问卷（只要名字是真实有效的，就认为问卷有效）

//输入第一行包含一个正整数n，表示收到的问卷数量。(1<=n<=2000)
// 接下来有n行，每行有一个由大小写英文字母，数字，
// 下划线组成的字符串，分别表示一份问卷的名字，字符串长度不超过100。
//
// 输出只有一个整数，表示有效问卷数量。
// 
// 5
//BA
//aOWVXARgUbJDG
//OPPCSKNS
//HFDJEEDA
//ABBABBBBAABBBAABAAA
// 
// 3
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n >= 1 && n <= 2000)
//		{
//			break;
//		}
//	}
//	while (n--)
//	{
//		char arr[101] = { 0 };
//		scanf("%s", &arr);
//		int ret = strlen(arr);
//		if (ret < 10)
//		{
//			char* p_1 = "_";
//			char* p = strstr(arr, p_1);
//			if (p == NULL)
//			{
//				int i = 0;
//				int count_1 = 0;
//				for (i = 0; i < ret; i++)
//				{
//					if (arr[i] == 0 || arr[i] == 1 || arr[i] == 2 || arr[i] == 3 || arr[i] == 4 || arr[i] == 5 ||
//						arr[i] == 6 || arr[i] == 7 || arr[i] == 8 || arr[i] == 9)
//					{
//						count_1++;
//					}
//				}
//				if (count_1 == 0)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//有n个黑白棋子，它们的一面是黑色，一面是白色。
// 它们被排成一行，位置可以用标号1~n来表示。一开始，所有的棋子都是黑色向上，
// 有q次操作，每次操作将位置标号在区间[L, R]内的所有棋子翻转（原来黑色变白色，原来白色变黑色）。
// 请在每次操作后，求这n个棋子中，黑色向上的棋子个数。
// 
// 第一行两个整数 n, q，1 <= n <= 1018, q <= 300;
//后面q行，每行两个整数 L, R，1 <= L <= R <= n。
// 
// q行，每行一个整数，表示每次操作后黑色向上的棋子个数。
// 
//100 2
//1 30
//21 40
// 
//70
//70
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int n, q;
	int L, R;
	scanf("%d %d", &n, &q);
	int* arr = (int*)malloc(sizeof(int) * n);
	int* arr_2 = (int*)malloc(sizeof(int) * q);
	//0为黑色1为白色
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
	for(j=0;j<q;j++)
	{

		while (1)
		{
			scanf("%d %d", &L, &R);
			if (L >= 1 && L <= R && R <= n)
			{
				break;
			}
		}
		for (i = 0; i < n; i++)
		{
			if (i >= L - 1 && i <= R - 1)
			{
				if (arr[i] == 0)
				{
					arr[i] = 1;
				}
				else
					arr[i] = 0;
			}
		}
		int count = 0;
		for (i = 0; i < n; i++)
		{
			if (arr[i] == 0)
			{
				count++;
			}
		}
		arr_2[j] = count;
	}
	for (j = 0; j < q; j++)
	{
		printf("%d\n", arr_2[j]);
	}
	return 0;
}