#pragma once
#include <stdio.h>
#define MAXSIZE 10
#define FALSE 0
#define TRUE 1

//定义队列
typedef struct sqQueue
{
	int data[MAXSIZE];
	int front, rear;
}sqQueue;

//初始化队列
void InitQueue(sqQueue* Q);
//判空
int isEmpty(sqQueue* Q);
//入队
int EnQueue(sqQueue* Q, int e);
//出队
int DeQueue(sqQueue* Q, int* x);