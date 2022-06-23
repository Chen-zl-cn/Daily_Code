#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//���������
typedef struct BiTNode { 
	int data;
	struct BiNode *lchild, *rchild;
}BiTNode,*BiTree;

//ջ
typedef struct Stack {
	BiTree data;
	struct Stack* next;
}Stack, * Top;

//��ʽ���н��
typedef struct LinkNode {
	BiTNode* data;
	struct LinkNode* next;
}LinkNode;
//����
typedef struct LinkQueue {
	LinkNode* front, * rear;
}LinkQueue;

//��������ʼ����������
int CreatBiT(BiTree* root);
//ǰ�����
void PreOrder(BiTree T);
//�ǵݹ�ǰ�����
void PreOrder_Non_rec(BiTree T);
//�������
void InOrder(BiTree T);
//�������
void PostOrder(BiTree T);
//��α���������
void LevelOrder(BiTree T);
//����������
int GetBiTDepth(BiTree T);
//�������Ҷ�ӽڵ�����
int LeafNodeNum(BiTree T);

//��ʼ��ջ
Top InitStack();
//��ջ
int Push(Top S, BiTree e);
//��ջ
BiTree Pop(Top S);

//��ʼ������
void InitQueue(LinkQueue* Q);
//���
void EnQueue(LinkQueue* Q, BiTNode* e);
//����
BiTNode* DeQueue(LinkQueue* Q);