#pragma once
#include<stdio.h>
#include<stdlib.h>

//单链表节点
typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, * LinkList;

//带头结点的单链表初始化
LinkList InitList();
//头插法添加链表结点
void List_HeadInsert(LinkList L, int e);
//尾插法添加链表结点
void List_TailInsert(LinkList L, int e);
//求表长
int GetLength(LinkList L);
//遍历链表
void PrintList(LinkList L);
//按序号查找节点值
LNode* GetElem(LinkList L, int i);
//按值查找表结点
LNode* LocateElem(LinkList L, int e);
//按序号插入结点
void InsertList(LinkList L, int i, int e);
//按序号删除链表中节点
void DelList(LinkList L, int i);