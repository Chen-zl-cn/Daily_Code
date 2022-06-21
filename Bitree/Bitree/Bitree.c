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
//�ǵݹ�ǰ�����
void PreOrder_Non_rec(BiTree T) {
	Top S = InitStack();
	BiTree p = T;
	while (p || S->next) {
		if (p) {
			visit(p);
			Push(S, p);
			p = p->lchild;
		}
		else {
			BiTree tmp = Pop(S);
			p = tmp->rchild;
		}
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
//����������
int GetBiTDepth(BiTree T) {
	if (T == NULL)
		return 0;
	int maxleft = GetBiTDepth(T->lchild), maxright = GetBiTDepth(T->rchild);
	if (maxleft > maxright) {
		return maxleft + 1;
	}
	else {
		return maxright + 1;
	}
}
//�������Ҷ�ӽڵ�����
int LeafNodeNum(BiTree T) {
	if (T == NULL)
		return 0;
	else if (T->lchild == NULL && T->rchild == NULL) {
		return 1;
	}
	else {
		return LeafNodeNum(T->lchild) + LeafNodeNum(T->rchild);
	}
}

//��ʼ��ջ(����һ����ջ��
Top InitStack() {
	Top T = (Top)malloc(sizeof(Stack));
	if (T == NULL)
		return NULL;
	T->next = NULL;
	return T;
}
//��ջ
int Push(Top T,BiTree e) {
	Top tmp = (Top)malloc(sizeof(BiTNode));
	if (tmp == NULL)
		return 0;
	tmp->next = T->next;
	tmp->data = e;
	T->next = tmp;
}
//��ջ
BiTree Pop(Top T) {
	if (T->next == NULL)
		return -1;
	BiTree e = (T->next)->data;
	Top tmp_p = T->next;
	T->next = tmp_p->next;
	free(tmp_p);
	return e;
}