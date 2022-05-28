#include <stdio.h>
#include <stdlib.h>
#define DEFAULT_SZ 20
#define MAX_SZ 100

typedef struct SqList
{
	int* data;
	int MaxSize;
	int length;
}SL;

void InitList(SL* L);
int InsertList(SL* L, int i, int e);
int DelMinElem(SL* L);
void Reverse(SL* L);
int ListDel(SL* L, int i);
void DelFitElem(SL* L, int e);
int PrintList(SL* L);
void DestoryList(SL* L);
int ChangeList(SL* L, int i, int e);
void LocateElem(SL* L, int e);