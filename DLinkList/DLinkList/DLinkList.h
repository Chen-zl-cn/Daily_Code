#pragma once
#include <stdio.h>

typedef struct DNnode
{
	int data;
	struct DNode* prior, * next;
}DNode, * DLinkList; 

//��ʼ��˫����
void InitList(DLinkList L);