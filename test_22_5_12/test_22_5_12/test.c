#include <stdio.h>
#include <stdlib.h>
#define InitSize 100
#define MAXSize 200

//Ë³Ðò±í
typedef struct SeqList
{
	int* data;
	int MaxSize;
	int length;
}SeqL;

void InitList(SeqL* L)
{
	L->data = (int*)malloc(sizeof(int) * InitSize);
	L->MaxSize = MAXSize;
	L->length = 0;
}

int InsertList(SeqL* L, int i, int e)
{
	if (i<1 || i>L->length + 1)
	{
		return 0;
	}
	else if (L->length > L->MaxSize)
	{
		return 0;
	}
	for (int j = L->length; j >= i; j--)
	{
		L->data[j] = L->data[j + 1];
	}
	L->data[i-1] = e;
	L->length++;
	return 1;
}

int DelList(SeqL* L, int i)
{
	if (i<1 || i>L->length)
	{
		return 0;
	}
	int ret = L->data[i - 1];
	for (int j = i; j < L->length; j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->length--;
	return ret;
}

int LocateElem(SeqL* L, int e)
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		if (L->data[i] == e)
		{
			return i + 1;
		}
	}
	if (i == L->length)
	{
		return 0;
	}
}

int main()
{
	SeqL L;
	InitList(&L);
	InsertList(&L, 1, 1);
	InsertList(&L, 2, 2);
	InsertList(&L, 3, 3);
	InsertList(&L, 4, 4);
	int ret = LocateElem(&L, 2);
	printf("%d\n", ret);
	for (int i = 0; i < L.length; i++)
	{
		printf("%d ", L.data[i]);
	}
	free(L.data);
	L.data = NULL;
	return 0;
}