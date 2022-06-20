#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode { 
	int data;
	struct BiNode *lchild, *rchild;
}BiTNode,*BiTree;

//��������ʼ����������
int CreatBiT(BiTree* root);

//ǰ�����
void PreOrder(BiTree T);
//�������
void InOrder(BiTree T);
//�������
void PostOrder(BiTree T);