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
void visit(BiTNode* T) {
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
//非递归前序遍历
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
//层次遍历二叉树
void LevelOrder(BiTree T) {
	LinkQueue Q;
	InitQueue(&Q);
	BiTree p = NULL;
	EnQueue(&Q, T);
	while (Q.front != Q.rear) {
		p = DeQueue(&Q);
		visit(p);
		if (p->lchild != NULL)
			EnQueue(&Q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(&Q, p->rchild);
	}
}
//求二叉树深度
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
//求二叉树叶子节点数量
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

//初始化栈(返回一个空栈）
Top InitStack() {
	Top T = (Top)malloc(sizeof(Stack));
	if (T == NULL)
		return NULL;
	T->next = NULL;
	return T;
}
//入栈
int Push(Top T,BiTree e) {
	Top tmp = (Top)malloc(sizeof(BiTNode));
	if (tmp == NULL)
		return 0;
	tmp->next = T->next;
	tmp->data = e;
	T->next = tmp;
}
//出栈
BiTree Pop(Top T) {
	if (T->next == NULL)
		return -1;
	BiTree e = (T->next)->data;
	Top tmp_p = T->next;
	T->next = tmp_p->next;
	free(tmp_p);
	return e;
}

//初始化队列
void InitQueue(LinkQueue* Q) {
	Q->front = Q->rear = (LinkNode*)malloc(sizeof(LinkNode));
	if (Q->front != NULL)
		Q->front->next = NULL;
}
//入队
void EnQueue(LinkQueue* Q, BiTNode* e) {
	LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));
	if (p != NULL) {
		p->data = e;
		p->next = NULL;
		Q->rear->next = p;
		Q->rear = p;
	}
}
//出队
BiTNode* DeQueue(LinkQueue* Q) {
	if (Q->front == Q->rear)
		return NULL;
	LinkNode* tmp = Q->front->next;
	BiTNode* ret = tmp->data;
	Q->front->next = tmp->next;
	if (Q->rear == tmp)
		Q->rear = Q->front;
	free(tmp);
	return ret;
}