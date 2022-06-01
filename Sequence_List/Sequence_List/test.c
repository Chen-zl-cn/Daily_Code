#include "SeqList.h"



int main()
{
	SeqL L;
	InitList(&L);
	AddList(&L, 1);
	AddList(&L, 2);
	AddList(&L, 2);
	AddList(&L, 2);
	AddList(&L, 3);
	AddList(&L, 4);
	AddList(&L, 5);
	AddList(&L, 5);
	PrintList(&L);
	DelRepElem(&L);
	PrintList(&L);
	return 0;
}