#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//��̬�ڴ����
//int main()
//{
//	//���ڴ�����ʮ�����οռ�
//	int* p = (int*)malloc(10 * sizeof(int));//������ٳɹ������ؿ��ٺÿռ��void*����ָ�룬����ʧ�ܷ���NULLָ��
//	if(p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ�򣬾�Ӧ�û�������ϵͳ��free(p)
//	free(p);//�ú���ֻ�������ͷ�malloc���ٵĿռ䣬��Ȼ��Ϊδ����
//	p = NULL;//ָ��ָ��ĵط��Ѿ���������ϵͳ�ˣ�����Ҫ��ָ���ÿ�
//	return 0;
//}

////calloc����,���Զ���ʼ��0
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}	
//	free(p);
//	p = NULL;
//	return 0;
//}

////realloc����
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//����Ϊ��ʹ��malloc���ٵĿռ�
//	//������濪�ٵ�20���ֽڿռ䲻��ʹ�ã��������realloc��������̬���ٵ��ڴ�
//	//realloc����ע�����
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ���µ���������Ŀռ䣬���Ұ�ԭ�������ݿ����������ͷžɵĿռ�
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//ע�⣺
// 1.�Զ�̬�����ڴ�󷵻ص�ָ�����Ҫ�ж����Ƿ�Ϊ��
// 2.�Զ�̬�ڴ濪�ٵĿռ䲻��Խ�����
// 3.���ܶԷǶ�̬�ڴ濪�ٵ�ָ��ʹ��free
// 4.ʹ��free�ͷŶ�̬�����ڴ��һ���֣����´����е�free(p)
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//free(p);
//	return 0;
//}
//5.��ͬһ�鶯̬�ڴ���ж���ͷ�
//6.��̬�����ڴ������ͷţ��ڴ�й©��
//

//�������顪��C99�У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������顯��Ա
// �ṹ�е����������Աǰ������һ��������Ա
//д��һ
//struct S
//{
//	int n;
//	int arr[];//���������Ա�������С�ɱ�
//};//�ڼ���ṹ�����ʹ�Сʱ����������������
////д����
//struct S1
//{
//	int n;
//	int arr[0];
//};
//
//int main()
//{
//	struct S s;
//	return 0;
//}

//���������÷�
//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	printf("\n");
//	//��������
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+ 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		ps = ptr;
//		ptr = NULL;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//��ָ��ʵ���������鹦��
struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		ps->arr = (int*)malloc(5 * sizeof(int));
		if (ps->arr == NULL)
		{
			printf("%s\n", strerror(errno));
		}
		else
		{
			int i = 0;
			for (i = 0; i < 5; i++)
			{
				ps->arr[i] = i;
				//printf("%d ", ps->arr[i]);
			}
			//������С
			int* ptr = (int*)realloc(ps->arr,10 * sizeof(int));
			if (ptr == NULL)
			{
				printf("%s\n", strerror(errno));
			}
			else
			{
				ps->arr = ptr;
				for (i = 5; i < 10; i++)
				{
					ps->arr[i] = i;
				}
				for (i = 0; i < 10; i++)
				{
					printf("%d ", ps->arr[i]);
				}
			}
		}
	}
	return 0;
}