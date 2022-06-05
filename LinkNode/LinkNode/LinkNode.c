#include"LinkNode.h"

//��ͷ���ĵ������ʼ��
LinkList InitList()
{
	//LNode* tmp;
	LinkList L = (LNode*)malloc(sizeof(LNode));//����һ��ͷ�ڵ�
	if (L == NULL)
	{
		printf("����ʧ��\n");
		return NULL;
	}
	else
	{
		L->next = NULL;
		return L;
	}
}

//ͷ�巨�������Ԫ��
void List_HeadInsert(LinkList L, int e)
{
	LNode* tmp = (LNode*)malloc(sizeof(LNode));
	if (tmp == NULL)
	{
		printf("���ʧ��");
	}
	else
	{
		tmp->data = e;
		tmp->next = L->next;
		L->next = tmp;
	}
}

//β�巨���������
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

//���
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

//��������
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

//����Ų��ҽڵ�
LNode* GetElem(LinkList L, int i)
{
	if (i<1 || i>GetLength(L))
	{
		printf("error");
		return NULL;
	}
	int j = 0;
	LNode* p = L;
	while (j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

//��ֵ���ұ���
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

//����Ų�����
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
			LNode* p = GetElem(L, (i - 1));
			tmp->data = e;
			tmp->next = GetElem(L, i);
			p->next = tmp;
		}
	}
}

//�����ɾ�������нڵ�
void DelList(LinkList L, int i)
{
	if (i<1 || i>GetLength(L))
	{
		printf("error\n");
	}
	else
	{
		LNode* pi_0 = GetElem(L, (i - 1));
		LNode* pi_1 = pi_0->next;
		pi_0->next = pi_1->next;
		free(pi_1);
	}
}