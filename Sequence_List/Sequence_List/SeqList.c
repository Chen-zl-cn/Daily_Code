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
}

//��˳���β����Ԫ��
void AddList(SeqL* L, int e)
{
	L->data[L->length] = e;
	L->length++;
}