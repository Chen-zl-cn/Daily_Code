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

//初始化顺序表
void InitList(SeqL* L);
//求顺序表表长
int Length(SeqL* L);
//输出顺序表
void PrintList(SeqL* L);
//在顺序表尾增加元素
void AddList(SeqL* L, int e);
////在顺序表中指定位置插入元素
//void InsertList(SeqL* L, int i, int e);
////删除顺序表中指定位置元素
//int ListDelByLoc(SeqL* L, int i);
////删除顺序表中指定元素
//int ListDelByElem(Seq* L, int e);
////修改顺序表中指定位置元素
//int ListModifyByLoc(Seq* L, int i);
////按位查找
//int GetElem(SeqL* L, int e);
////按值查找
//int LocElem(SeqL* L, int i);
////销毁顺序表
//void DestoryList(SeqL* L);
