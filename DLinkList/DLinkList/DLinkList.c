#include "DLinkList.h"

//初始化双链表
DLinkList InitList()
{
	DLinkList L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return NULL;
	L->next = L;
	L->prior = L;
	return L;
}

//尾插法增加结点
void TailInsertList(DLinkList L, int e)
{
	DNode* tmp = (DNode*)malloc(sizeof(DNode));
	if (tmp == NULL)
		printf("error\n");
	else
	{
		DNode* p = L;
		while (p->next != L)
		{
			p = p->next;
		}
		tmp->data = e;
		tmp->next = L;
		tmp->prior = p;
		p->next = tmp;
	}
}

//计算链表长度
int GetLength(DLinkList L)
{
	DNode* p = L;
	int count = 0;
	while (p->next != L)
	{
		p = p->next;
		count++;
	}
	return count;
}

//删除指定序号结点
void DelList(DLinkList L, int i)
{
	if (i<1 || i>GetLength(L))
	{
		printf("error\n");
	}
	else
	{
		DNode* p = L;
		while (i--)
		{
			p = p->next;
		}
		DNode* tmp = p->prior;
		tmp->next = p->next;
		tmp = p->next;
		tmp->prior = p->prior;
		free(p);
	}
}

//输出链表
void PrintList(DLinkList L)
{
	DNode* p = L;
	while (p->next != L)
	{
		p = p->next;
		printf("%d ", p->data);
	}
	printf("\n");
}