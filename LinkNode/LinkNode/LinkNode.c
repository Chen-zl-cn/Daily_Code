#include"LinkNode.h"

//带头结点的单链表初始化
LinkList InitList()
{
	//LNode* tmp;
	LinkList L = (LNode*)malloc(sizeof(LNode));//分配一个头节点
	if (L == NULL)
	{
		printf("插入失败\n");
		return NULL;
	}
	else
	{
		L->next = NULL;
		return L;
	}
}

//头插法添加链表元素
void List_HeadInsert(LinkList L, int e)
{
	LNode* tmp = (LNode*)malloc(sizeof(LNode));
	if (tmp == NULL)
	{
		printf("添加失败");
	}
	else
	{
		tmp->data = e;
		tmp->next = L->next;
		L->next = tmp;
	}
}

//尾插法添加链表结点
void List_TailInsert(LinkList L, int e)
{
	LNode* p = (LNode*)malloc(sizeof(LNode));
	if (p == NULL) {
		printf("error");
	}
	else
	{
		LNode* tmp = L;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		p->data = e;
		p->next = tmp->next;
		tmp->next = p;
	}
}

//求表长
int GetLength(LinkList L)
{
	LNode* p = L->next;
	int count = 0;
	while (p)
	{
		p = p->next;
		count++;
	}
	return count;
}

//遍历链表
void PrintList(LinkList L)
{
	LNode* p = L->next;
	while (p)                
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

//按序号查找节点值
int GetElem(LinkList L, int i)
{
	if (i<1 || i>GetLength(L))
	{
		printf("error");
		return -1;
	}
	int j = 0;
	LNode* p = L;
	while (j < i)
	{
		p = p->next;
		j++;
	}
	return p->data;
}

//按值查找表结点
LNode* LocateElem(LinkList L, int e)
{
	LNode* p = L->next;
	while (p)
	{
		if (p->data == e)
			return p;
		p = p->next;
	}
	return NULL;
}

//按序号插入结点
void InsertList(LinkList L, int i, int e)
{
	if (i<1 || i>GetLength(L))
	{
		printf("error\n");
	}
	else
	{
		LNode* tmp = (LNode*)malloc(sizeof(LNode));
		if (tmp == NULL)
		{
			printf("error\n");
		}
		else
		{
			LNode* p = L;
			LNode* p0 = NULL;
			while (i--)
			{
				p0 = p;
				p = p->next;
			}
			tmp->data = e;
			tmp->next = p;
			p0->next = tmp;
		}
	}
}