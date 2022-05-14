#include "List.h"


int main()
{
	SL L;
	InitList(&L);
	for (int i = 1; i <= DEFAULT_SZ; i++)
	{
		InsertList(&L, i, i - 1);
	}
	PrintList(&L);
	//删除顺序表中最小元素
	int ret = DelMinElem(&L);
	printf("%d\n", ret);
	PrintList(&L);

	//逆置顺序表中元素
	Reverse(&L);
	PrintList(&L);

	//删除顺序表中所有值为e的元素
	InsertList(&L, 1, 15);
	PrintList(&L);
	int e = 15;
	DelFitElem(&L, e);
	PrintList(&L);

	//删除表中第5个元素
	ListDel(&L, 5);
	PrintList(&L);

	//修改表中第五个元素为50
	ChangeList(&L, 5, 50);
	PrintList(&L);

	//查找50的位置
	LocateElem(&L, 50);
	DestoryList(&L);
	return 0;
}