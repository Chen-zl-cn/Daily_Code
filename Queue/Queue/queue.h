#pragma once
#include <stdio.h>
#define MAXSIZE 10
#define FALSE 0
#define TRUE 1

//�������
typedef struct sqQueue
{
	int data[MAXSIZE];
	int front, rear;
}sqQueue;

//��ʼ������
void InitQueue(sqQueue* Q);
//�п�
int isEmpty(sqQueue* Q);
//���
int EnQueue(sqQueue* Q, int e);
//����
int DeQueue(sqQueue* Q, int* x);