#include "Bitree.h"

//创建（初始化）二叉树
int CreatBiT(BiTree* root) {
	int val;
	int a = scanf("%d", &val);
	if (val <= 0) {
		*root = NULL;
		return 0;
	}
	*root = (BiTree)malloc(sizeof(BiTNode));
	if (*root == NULL)
		return 0;
	(*root)->data = val;
	CreatBiT(&((*root)->lchild));
	CreatBiT(&((*root)->rchild));
	return 1;
}

//访问结点数据
void visit(BiTree T) {
	if(T!=NULL)
		printf("%d ", T->data);
}

//前序遍历
void PreOrder(BiTree T) {
	if (T != NULL) {
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
//中序遍历
void InOrder(BiTree T) {
	InOrder(T->lchild);
	visit(T);
	InOrder(T->rchild);
}
//后序遍历
void PostOrder(BiTree T) {
	PostOrder(T->lchild);
	PostOrder(T->rchild);
	visit(T);
}