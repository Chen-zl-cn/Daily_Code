#include "SeqList.h"

//��ʼ��˳���
void InitList(SeqL* L)
{
	L->data = (int*)malloc(INITSIZE * sizeof(int));
	L->maxsize = MAXSIZE;
	L->length = 0;
}

//��˳����
int Length(SeqL* L)
{
	return L->length;
}

//���˳���
void PrintList(SeqL* L)
{
	if (L->length > 0)
	{
		for (int i = 0; i < L->length; i++)
		{
			printf("%d ", L->data[i]);
			if (i % 4 == 0 && i >= 4)
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("NULL\n");
	}
	printf("\n");
	printf("\n");
}

//��˳���β����Ԫ��
void AddList(SeqL* L, int e)
{
	L->data[L->length] = e;
	L->length++;
}

//��˳�����ָ��λ�ò���Ԫ��
void InsertList(SeqL* L, int i, int e)
{
	//�ж�˳��������Ƿ��Ѿ�����(����ģ�
	if (L->length == INITSIZE)
	{
		L->data = (int*)realloc(L->data, (L->length + 10) * sizeof(int));
	}
	else if (L->length != 0 && i <= L->length)
	{
		for (int j = L->length - 1; j >= i - 1; j--)
		{
			L->data[j + 1] = L->data[j];
		}
		L->data[i - 1] = e;
		L->length++;
	}
	else
	{
		printf("wrong");
	}
}

//ɾ��˳�����ָ��λ��Ԫ��
int ListDelByLoc(SeqL* L, int i)
{
	if (L->length > 0 && i < L->length)
	{
		for (int j = i; j < L->length; j++)
		{
			L->data[j - 1] = L->data[j];
		}
		L->length--;
		return 1;
	}
	else if (L->length > 0 && i == L->length)
	{
		L->data[L->length - 1] = 0;
		L->length--;
		return 1;
	}
	else
	{
		return 0;
	}
}

//ɾ��˳�����ָ��Ԫ��
int ListDelByElem(SeqL* L, int e)
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		if (L->data[i] == e)
		{
			break;
		}
	}
	if (i == L->length)
	{
		return 0;
	}
	for (int j = i; j < L->length; j++)
	{
		L->data[j] = L->data[j + 1];
	}
	L->length--;
	return 1;
}

//�޸�˳�����ָ��λ��Ԫ��
int ListModifyByLoc(SeqL* L, int i, int e)
{
	if (L->length > 0 && i <= L->length)
	{
		L->data[i - 1] = e;
		return 1;
	}
	return 0;
}

/*��ֵ����
�ҵ��󷵻���˳����е�λ��
û�ҵ�����-1
*/
int GetElem(SeqL* L, int e)
{
	for (int j = 0; j < L->length; j++)
	{
		if (L->data[j] == e)
		{
			return j + 1;
		}
	}
	return -1;
}

//��λ����
int LocElem(SeqL* L, int i)
{
	if (L->length > 0 && i <= L->length)
	{
		return L->data[i - 1];
	}
	return -1;
}

//����˳���
void DestoryList(SeqL* L)
{
	free(L->data);
	L->data = NULL;
}

/*
	����Ϊ�������ݽṹ2.1�ۺ�Ӧ����
*/

/*
	1.��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ�����ɺ�������
	��ɾ��Ԫ�ص�ֵ���ճ���λ�������һ��Ԫ�������˳���Ϊ
	�գ�����ʾ������Ϣ���˳����С�
*/
int DelMinElem(SeqL* L)
{
	if (L->length == 0)
	{
		printf("˳���Ϊ��\n");
		return -1;
	}
	else
	{
		int tmp = L->data[0];
		for (int i = 0; i < L->length; i++)
		{
			if (L->data[i] < tmp)
			{
				tmp = L->data[i];
			}
		}
		L->data[GetElem(L, tmp) - 1] = L->data[L->length - 1];
		return tmp;
	}
}

/*
	2.���һ����Ч�㷨��˳���L������Ԫ�����ã�Ҫ���㷨�Ŀռ�
	���Ӷ�ΪO(1)
*/
void ReverseList(SeqL* L)
{
	int left = 0;
	int right = L->length - 1;
	while (left < right)
	{
		int tmp = 0;
		tmp = L->data[left];
		L->data[left] = L->data[right];
		L->data[right] = tmp;
		left++;
		right--;
	}
}
/*
	3.�Գ���Ϊn��˳���L����дһ��ʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�
	ΪO(1)���㷨�����㷨ɾ�����Ա�������Ϊx������Ԫ��
	2 3 4 1 5 1
*/
void DelElemBy_x(SeqL* L, int x)
{
	int tmp = 0;
	for (int j = 0; j < L->length; j++)
	{
		if (x == L->data[j])
		{
			tmp++;
		}
		else
		{
			L->data[j - tmp] = L->data[j];
		}
	}
	L->length = L->length - tmp;
}
/*
	4.���������ɾ��ֵ�ڸ������䣨s-t��֮�������Ԫ�أ�Ҫ��s<t��
	��s��t���Ϸ�����˳���Ϊ�գ�����ʾ�����Ƴ����С�
*/
void DelElemBt_s_t(SeqL* L, int s, int t)
{
	if (L->length == 0)
	{
		printf("˳���Ϊ��\n");
	}
	else if (s >= t)
	{
		printf("�������䲻�Ϸ�\n");
	}
	else
	{
		int tmp = 0;
		for (int i = 0; i < L->length; i++)
		{
			if (L->data[i] >= s && L->data[i] <= t)
			{
				tmp++;
			}
			else
			{
				L->data[i - tmp] = L->data[i];
			}
		}
		L->length = L->length - tmp;
	}
}
/*
	6.������˳�����ɾ��ɾ��������ֵ�ظ���Ԫ�أ�ʹ���е�Ԫ�ص�
	ֵ������ͬ��1 2 2 2 3 4 5 5 ->1 2 3 4 5
*/
void DelRepElem(SeqL* L)
{
	if (L->length == 0)
	{
		printf("˳���Ϊ��\n");
	}
	else
	{
		int i = 0;
		int j = 0;
		for ( j = 1; j < L->length; j++)
		{
			if (L->data[i] != L->data[j])
			{
				L->data[++i] = L->data[j];
			}
		}
		L->length = i + 1;
	}
}