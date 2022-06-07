#include "queue.h"

//初始化队列
void InitQueue(sqQueue* Q)
{
	Q->front = Q->rear = 0;
}

//判空
int isEmpty(sqQueue* Q)
{
	if (Q->front == Q->rear)
		return TRUE;
	else
		return FALSE;
}

//入队
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

//出队
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