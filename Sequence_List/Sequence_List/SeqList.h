#include <stdio.h>
#include <stdlib.h>
#define INITSIZE 10
#define MAXSIZE 100

typedef struct SeqList
{
	int* data;
	int maxsize;
	int length;
}SeqL;

//��ʼ��˳���
void InitList(SeqL* L);
//��˳����
int Length(SeqL* L);
//���˳���
void PrintList(SeqL* L);
//��˳���β����Ԫ��
void AddList(SeqL* L, int e);
////��˳�����ָ��λ�ò���Ԫ��
//void InsertList(SeqL* L, int i, int e);
////ɾ��˳�����ָ��λ��Ԫ��
//int ListDelByLoc(SeqL* L, int i);
////ɾ��˳�����ָ��Ԫ��
//int ListDelByElem(Seq* L, int e);
////�޸�˳�����ָ��λ��Ԫ��
//int ListModifyByLoc(Seq* L, int i);
////��λ����
//int GetElem(SeqL* L, int e);
////��ֵ����
//int LocElem(SeqL* L, int i);
////����˳���
//void DestoryList(SeqL* L);
