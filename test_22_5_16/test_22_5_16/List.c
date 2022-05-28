#include "List.h"

//��ʼ��˳���
void InitList(SL* L)
{
	L->data = (int*)malloc(DEFAULT_SZ * sizeof(int));
	L->MaxSize = MAX_SZ;
	L->length = 0;
}
//˳���ָ��λ�ò���
int InsertList(SL* L, int i, int e)
{
	if (i<1 || i>L->length + 1)
	{
		printf("����ʧ��\n");
		return 0;
	}
	else if (L->length >= L->MaxSize)
	{
		printf("����ʧ��\n");
		return 0;
	}
	for (int j = L->length; j >= i; j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = e;
	L->length++;
}

//ɾ����СԪ��
int DelMinElem(SL* L)
{
	if (L->length == 0)
	{
		printf("��Ϊ��\n");
		return -1;
	}
	int tmp = L->data[L->length - 1];
	int inx = 0;
	for (int i = L->length; i >= 1; i--)
	{
		if (L->data[i - 1] < tmp)
		{
			tmp = L->data[i - 1];
			inx = i - 1;
		}
	}
	for (int j = inx; j < L->length - 1; j++)
	{
		L->data[j] = L->data[j + 1];
	}
	L->length--;
	return tmp;
}

//����˳���
void Reverse(SL* L)
{
	int left = 0;
	int right = L->length - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = L->data[left];
		L->data[left] = L->data[right];
		L->data[right] = tmp;
		left++;
		right--;
	}
}

//ɾ��ָ��λ�õ�Ԫ��
int ListDel(SL* L, int i)
{
	if (i<1 || i>L->length)
	{
		printf("Ҫɾ���ĵ�%d��Ԫ�ز�����", i);
		return 0;
	}
	for (int j = i; j <= L->length; j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->length--;
	return 1;
}

//ɾ��ָ����С������Ԫ��
void DelFitElem(SL* L, int e)
{
	int flag = 0;
	do
	{
		flag = 0;
		for (int i = 1; i <= L->length; i++)
		{
			if (L->data[i - 1] == e)
			{
				flag++;
				for (int j = i; j <= L->length; j++)
				{
					L->data[j - 1] = L->data[j];
				}
				L->length--;
				break;
			}
		}

	} while (flag != 0);
}

//��ӡ��
int PrintList(SL* L)
{
	if (L->length == 0)
	{
		return 0;
	}
	for (int i = 1; i <= L->length; i++)
	{
		printf("%d ", L->data[i - 1]);
	}
	printf("\n");
	return 1;
}

//����˳���
void DestoryList(SL* L)
{
	free(L->data);
	L->data = NULL;
}

//�޸ı��е�i��Ԫ��Ϊe
int ChangeList(SL* L, int i, int e)
{
	if (i<1 || i>L->length)
	{
		printf("Ҫ�޸ĵĵ�%d��Ԫ�ز�����\n", i);
		return 0;
	}
	L->data[i - 1] = e;
	return 1;
}

//��ֵ����
void LocateElem(SL* L, int e)
{
	for (int i = 1; i <= L->length; i++)
	{
		if (L->data[i - 1] == e)
		{
			printf("%d�ǵ�%d��Ԫ��\n", e, i);
			break;
		}
	}
}