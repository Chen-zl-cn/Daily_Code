#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>



//�ַ�ָ��ĵ�һ���÷�
//int main()
//{
//	char a = 'w';
//	char* p = &a;
//	printf("%c\n", *p);
//	return 0;
//}

//�ַ�ָ��ĵڶ����÷�
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef
//	return 0;
//}

//�ַ�ָ��ĵ������÷�
//int main()
//{
//	const char* p = "abcdef";//�����"abcdef"��һ�������ַ��������ɸ��ģ�������ǰ��Ӹ�const
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������-ָ������
//	char* pch[5];//����ַ���ָ�������-ָ������
//	char (*p)[5] = &ch;//����ָ��-ָ��ch����
//	int(*p1)[10] = &arr;//����ָ�룬ָ��arr����
//	int* (*p3)[4] = &parr;//����ָ�룬ָ��parr����
//	return 0;
//}

//����ָ���ʹ��
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
//			printf("%d ", ( * (p + i))[j]);//���ַ�������
//			//printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);//��ά���鴫�Σ��Ǵ��ĵ�һ������ĵ�ַ
//	return 0;
//}

//int main()
//{
//	int arr[5];//arr��һ���������飬�����Ԫ��
//	int* parr1[10];//parr1��һ��ָ�����飬��10��Ԫ�أ�Ԫ������Ϊint*
//	int(*parr2)[10];//parr2��һ������ָ�룬��ָ���������10��Ԫ�أ�Ԫ������Ϊint
//	int(*parr3[10])[5];//parr3��һ�����飬��10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�Ԫ������Ϊ����
//	return 0;
//}


//��ά���鴫�Σ�����д���Կ�
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
//	test(arr);//��ά���鴫��
//	test1(arr);
//	test2(arr);
//	return 0;
//}

//����ָ�봫��
//���·�ʽ�Կ�
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

//����ָ��-ָ������ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &Add);//������һ����&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", Add);
//	int (*p)(int, int) = Add;//����ָ�룬��һ��int��ָ�����������ͣ�����������int��ָ�������յĲ�������
//	printf("%d", ( * p)(3, 5));//����ָ���ʹ��
//	return 0;
//}

//����ָ��ʹ�ð���

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

//�������´���
//void(*signal(int, void(*)(int)))(int);
//signal��һ���������������������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ�������Ϊint������ֵΪ��

//��
//typedef void(*pfun_t)(int);//��void(*)(int)��������Ϊpfun_t
//pfun_t signal(int, pfun_t);

//����ָ������

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
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
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
	printf("#### 5.����      0.exit ####\n");
	printf("############################\n");
}

int main()
{
	int input = 0;
	int x = 0, y = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("�������������������ÿո����:>");
			scanf("%d %d", &x, &y);
			printf("%d\n", Add(x,y));
			break;
		case 2:
			printf("�������������������ÿո����:>");
			scanf("%d %d", &x, &y);
			printf("%d\n", Sub(x,y));
			break;
		case 3:
			printf("�������������������ÿո����:>");
			scanf("%d %d", &x, &y);
			printf("%d\n", Mul(x,y));
			break;
		case 4:
			printf("�������������������ÿո����:>");
			scanf("%d %d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 5:
			printf("������һ��������:>");
			scanf("%d", &x);
			double c = sqrt(x);
			printf("%f\n", c);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}
