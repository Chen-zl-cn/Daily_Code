#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>



//���ڵĵ����ʾ�Խ��Խ���ˣ����Գ����˺ܶ��˶���ˢ�ʾ�������
//��֪ĳ�ʾ���Ҫ��д���֣�������ֽ��ɴ�СдӢ����ĸ����ҳ��Ȳ�����10��
//��������Ϊ�����������ʵ��Ч�ģ�������ж�Ϊ������д�ʾ�
//�����жϳ��ɶ�����Ч�ʾ�ֻҪ��������ʵ��Ч�ģ�����Ϊ�ʾ���Ч��

//�����һ�а���һ��������n����ʾ�յ����ʾ�������(1<=n<=2000)
// ��������n�У�ÿ����һ���ɴ�СдӢ����ĸ�����֣�
// �»�����ɵ��ַ������ֱ��ʾһ���ʾ�����֣��ַ������Ȳ�����100��
//
// ���ֻ��һ����������ʾ��Ч�ʾ�������
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


//��n���ڰ����ӣ����ǵ�һ���Ǻ�ɫ��һ���ǰ�ɫ��
// ���Ǳ��ų�һ�У�λ�ÿ����ñ��1~n����ʾ��һ��ʼ�����е����Ӷ��Ǻ�ɫ���ϣ�
// ��q�β�����ÿ�β�����λ�ñ��������[L, R]�ڵ��������ӷ�ת��ԭ����ɫ���ɫ��ԭ����ɫ���ɫ����
// ����ÿ�β���������n�������У���ɫ���ϵ����Ӹ�����
// 
// ��һ���������� n, q��1 <= n <= 1018, q <= 300;
//����q�У�ÿ���������� L, R��1 <= L <= R <= n��
// 
// q�У�ÿ��һ����������ʾÿ�β������ɫ���ϵ����Ӹ�����
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
	//0Ϊ��ɫ1Ϊ��ɫ
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