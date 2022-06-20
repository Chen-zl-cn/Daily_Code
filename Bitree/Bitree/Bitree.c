#include "Bitree.h"

//��������ʼ����������
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

//���ʽ������
void visit(BiTree T) {
	if(T!=NULL)
		printf("%d ", T->data);
}

//ǰ�����
void PreOrder(BiTree T) {
	if (T != NULL) {
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
//�������
void InOrder(BiTree T) {
	InOrder(T->lchild);
	visit(T);
	InOrder(T->rchild);
}
//�������
void PostOrder(BiTree T) {
	PostOrder(T->lchild);
	PostOrder(T->rchild);
	visit(T);
}