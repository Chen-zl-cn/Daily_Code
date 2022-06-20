#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode { 
	int data;
	struct BiNode *lchild, *rchild;
}BiTNode,*BiTree;

//创建（初始化）二叉树
int CreatBiT(BiTree* root);

//前序遍历
void PreOrder(BiTree T);
//中序遍历
void InOrder(BiTree T);
//后序遍历
void PostOrder(BiTree T);