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
	//ɾ��˳�������СԪ��
	int ret = DelMinElem(&L);
	printf("%d\n", ret);
	PrintList(&L);

	//����˳�����Ԫ��
	Reverse(&L);
	PrintList(&L);

	//ɾ��˳���������ֵΪe��Ԫ��
	InsertList(&L, 1, 15);
	PrintList(&L);
	int e = 15;
	DelFitElem(&L, e);
	PrintList(&L);

	//ɾ�����е�5��Ԫ��
	ListDel(&L, 5);
	PrintList(&L);

	//�޸ı��е����Ԫ��Ϊ50
	ChangeList(&L, 5, 50);
	PrintList(&L);

	//����50��λ��
	LocateElem(&L, 50);
	DestoryList(&L);
	return 0;
}