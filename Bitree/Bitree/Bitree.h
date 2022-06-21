#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//二叉树结点
typedef struct BiTNode { 
	int data;
	struct BiNode *lchild, *rchild;
}BiTNode,*BiTree;

//栈
typedef struct Stack {
	BiTree data;
	struct Stack* next;
}Stack, * Top;

//创建（初始化）二叉树
int CreatBiT(BiTree* root);
//前序遍历
void PreOrder(BiTree T);
//非递归前序遍历
void PreOrder_Non_rec(BiTree T);
//中序遍历
void InOrder(BiTree T);
//后序遍历
void PostOrder(BiTree T);
//求二叉树深度
int GetBiTDepth(BiTree T);
//求二叉树叶子节点数量
int LeafNodeNum(BiTree T);

//初始化栈
Top InitStack();
//入栈
int Push(Top S, BiTree e);
//出栈
BiTree Pop(Top S);