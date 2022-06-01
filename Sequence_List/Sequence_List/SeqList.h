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
//��˳�����ָ��λ�ò���Ԫ��
void InsertList(SeqL* L, int i, int e);
//ɾ��˳�����ָ��λ��Ԫ��
int ListDelByLoc(SeqL* L, int i);
//ɾ��˳�����ָ��Ԫ��
int ListDelByElem(SeqL* L, int e);
//�޸�˳�����ָ��λ��Ԫ��
int ListModifyByLoc(SeqL* L, int i, int e);
//��ֵ����
int GetElem(SeqL* L, int e);
//��λ����
int LocElem(SeqL* L, int e);
//����˳���
void DestoryList(SeqL* L);

/*
	����Ϊ�������ݽṹ2.1�ۺ�Ӧ����
*/

/*
	1.��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ�����ɺ�������
	��ɾ��Ԫ�ص�ֵ���ճ���λ�������һ��Ԫ�������˳���Ϊ
	�գ�����ʾ������Ϣ���˳����С�
*/
int DelMinElem(SeqL* L);
/*
	2.���һ����Ч�㷨��˳���L������Ԫ�����ã�Ҫ���㷨�Ŀռ�
	���Ӷ�ΪO(1)
*/
void ReverseList(SeqL* L);
/*
	3.�Գ���Ϊn��˳���L����дһ��ʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�
	ΪO(1)���㷨�����㷨ɾ�����Ա�������Ϊx������Ԫ��
*/
void DelElemBy_x(SeqL* L, int x);
/*
	4.������˳�����ɾ��ֵ�ڸ������䣨s-t��֮�������Ԫ�أ�Ҫ��
	s<t����s��t���Ϸ�����˳���Ϊ�գ�����ʾ�����Ƴ����С�
	5.�����Ҫ�����s��t��ֵ
*/
void DelElemBt_s_t(SeqL* L, int s, int t);
/*
	6.������˳�����ɾ��ɾ��������ֵ�ظ���Ԫ�أ�ʹ���е�Ԫ�ص�
	ֵ������ͬ��
*/
void DelRepElem(SeqL* L);