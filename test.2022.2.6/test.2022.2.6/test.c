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
//	printf("#### 5.����      0.exit ####\n");
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
//		printf("��ѡ��:>");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�������������������ÿո����:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("�������������������ÿո����:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("�������������������ÿո����:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("�������������������ÿո����:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 5:
//			printf("������һ��������:>");
//			scanf("%d", &x);
//			double c = sqrt(x);
//			printf("%f\n", c);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { -4,-3,-2,-1,0,1,2,3,4,5 };//�˴�Ҳ������scanf��ȡ�û�����������ٷ�������
//	int i = 0;
//	int count_1 = 0;//ͳ�������ĸ���
//	int count_2 = 0;//ͳ��0�ĸ���
//	int count_3 = 0;//ͳ�Ƹ����ĸ���
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
//	printf("�����ĸ���Ϊ%d,0�ĸ���Ϊ%d,�����ĸ���Ϊ%d\n", count_1, count_2, count_3);
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
//	printf("��n");
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
//	int(*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//�˴��ĺ���ָ������Ҳ��������ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//
//	} while (input);
//	return 0;
//}


////�ص�����������
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
//void Calc(int(*p)(int, int))//�ú�����Ϊ�ص�����
//{
//	int x = 0, y = 0;
//	printf("�������������������ÿո����:>");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
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
	int(*p)[10] = &arr;//����ָ��
	int(*pf)(int, int) = &Fun;//����ָ��
	int(*pfArr[4])(int, int) = { pf };//����ָ������
	int(*(*ppfArr)[4])(int, int) = &pfArr;//ָ����ָ�������ָ��
	return 0;
}