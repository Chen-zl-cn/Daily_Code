#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//���0-100000֮�������ˮ�ɻ��������������ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
//#include <stdio.h>
//
//int NumOfDigt(int a)//�ú�������һ������λ����������153������3
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
//int CiFang(int a, int num)//�ú�������Ϊ��a��num�η�
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
//int SumOfNum(int a,int num)//�ú������Է���һ�����ĸ�λ����num�η�֮�ͣ�numΪ����λ������153������1^3+5^3+3^3�ĺ�
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





//���0-100000֮�������ˮ�ɻ��������������ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1-Ҫ֪�����������ָ���
//		int tmp = i;
//		int num = 1;
//		while (tmp /= 10)
//		{
//			num++;
//		}
//		//2-Ҫ�������λ�����ֵĴη�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, num);//pow���ص���һ��double���͵�����sum�����ͣ�����ǿ������ת��һ��
//			tmp /= 10;
//		}
//		//3-�жϴη�֮���Ƿ�������������
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////��ӡ����(13,11)
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
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ'*'
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
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

//����ˮ���⣺һƿ��ˮһԪ��2����ƿ���Ի�һƿ��ˮ����20Ԫ���������ƿ��ˮ�����ʵ�֣�

//����1
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

//����2
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = 2 * money - 1;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

//��������ż��˳�򣨵�������ʹ����ȫ��λ��ż��ǰ�棩


int main()
{
	int arr[] = { 2,1,3,3,13,5,5,7,11,9,13 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 0)
		{
			int right = sz - 1;
			while (i < right)
			{
				if (arr[right] % 2 == 1)
				{
					int tmp = arr[right];
					arr[right] = arr[i];
					arr[i] = tmp;
					break;
				}
				else
					right--;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}