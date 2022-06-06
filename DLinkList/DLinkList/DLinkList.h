#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct DNode
{
	int data;
	struct DNode* prior, * next;
}DNode, * DLinkList; 

//��ʼ��˫����
DLinkList InitList();
//β�巨���ӽ��
void TailInsertList(DLinkList L, int e);
//����������
int GetLength(DLinkList L);
//ɾ��ָ����Ž��
void DelList(DLinkList L, int i);
//�������
void PrintList(DLinkList L);