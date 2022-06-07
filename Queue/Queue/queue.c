#include "queue.h"

//��ʼ������
void InitQueue(sqQueue* Q)
{
	Q->front = Q->rear = 0;
}

//�п�
int isEmpty(sqQueue* Q)
{
	if (Q->front == Q->rear)
		return TRUE;
	else
		return FALSE;
}

//���
int EnQueue(sqQueue* Q, int e)
{
	if ((Q->rear + 1) % MAXSIZE == Q->front)
	{
		return FALSE;
	}
	else
	{
		Q->data[Q->rear] = e;
		Q->rear = (Q->rear + 1) % MAXSIZE;
		return TRUE;
	}
}

//����
int DeQueue(sqQueue* Q, int* ret)
{
	if (Q->front == Q->rear)
		return FALSE;
	else
	{
		*ret = Q->data[Q->front];
		Q->front = (Q->front + 1) % MAXSIZE;
		return TRUE;
	}
}