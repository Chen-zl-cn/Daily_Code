#pragma once
#include<stdio.h>
#include<stdlib.h>

//������ڵ�
typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, * LinkList;

//��ͷ���ĵ������ʼ��
LinkList InitList();
//ͷ�巨���������
void List_HeadInsert(LinkList L, int e);
//β�巨���������
void List_TailInsert(LinkList L, int e);
//���
int GetLength(LinkList L);
//��������
void PrintList(LinkList L);
//����Ų��ҽڵ�ֵ
LNode* GetElem(LinkList L, int i);
//��ֵ���ұ���
LNode* LocateElem(LinkList L, int e);
//����Ų�����
void InsertList(LinkList L, int i, int e);
//�����ɾ�������нڵ�
void DelList(LinkList L, int i);