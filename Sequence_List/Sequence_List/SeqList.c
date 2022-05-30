#include "SeqList.h"

//初始化顺序表
void InitList(SeqL* L)
{
	L->data = (int*)malloc(INITSIZE * sizeof(int));
	L->maxsize = MAXSIZE;
	L->length = 0;
}

//求顺序表表长
int Length(SeqL* L)
{
	return L->length;
}

//输出顺序表
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

//在顺序表尾增加元素
void AddList(SeqL* L, int e)
{
	L->data[L->length] = e;
	L->length++;
}