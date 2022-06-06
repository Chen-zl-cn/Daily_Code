#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct DNode
{
	int data;
	struct DNode* prior, * next;
}DNode, * DLinkList; 

//初始化双链表
DLinkList InitList();
//尾插法增加结点
void TailInsertList(DLinkList L, int e);
//计算链表长度
int GetLength(DLinkList L);
//删除指定序号结点
void DelList(DLinkList L, int i);
//输出链表
void PrintList(DLinkList L);