#include "DLinkList.h"


int main()
{
	DLinkList L = InitList();
	TailInsertList(L, 1);
	TailInsertList(L, 2);
	TailInsertList(L, 3);
	PrintList(L);
	DelList(L, 2);
	PrintList(L);
	return 0;
}