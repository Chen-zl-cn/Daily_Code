#include"LinkNode.h"

int main()
{
	LinkList L = InitList();
	int i = 1;
	while (i <= 50)
	{
		List_TailInsert(L, i);
		i++;
	}
	PrintList(L);
	InsertList(L, 5, 7);
	PrintList(L);
	DelList(L, 5);
	PrintList(L);
	return 0;
}