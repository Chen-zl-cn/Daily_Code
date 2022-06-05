#pragma once
#include <stdio.h>

typedef struct DNnode
{
	int data;
	struct DNode* prior, * next;
}DNode, * DLinkList; 

//³õÊ¼»¯Ë«Á´±í
void InitList(DLinkList L);