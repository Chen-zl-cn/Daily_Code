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
//在顺序表中指定位置插入元素
void InsertList(SeqL* L, int i, int e);
//删除顺序表中指定位置元素
int ListDelByLoc(SeqL* L, int i);
//删除顺序表中指定元素
int ListDelByElem(SeqL* L, int e);
//修改顺序表中指定位置元素
int ListModifyByLoc(SeqL* L, int i, int e);
//按值查找
int GetElem(SeqL* L, int e);
//按位查找
int LocElem(SeqL* L, int e);
//销毁顺序表
void DestoryList(SeqL* L);

/*
	以下为王道数据结构2.1综合应用题
*/

/*
	1.从顺序表中删除具有最小值的元素（假设唯一）并由函数返回
	被删除元素的值。空出的位置由最后一个元素填补，若顺序表为
	空，则显示出错信息并退出运行。
*/
int DelMinElem(SeqL* L);
/*
	2.设计一个高效算法将顺序表L的所有元素逆置，要求算法的空间
	复杂度为O(1)
*/
void ReverseList(SeqL* L);
/*
	3.对长度为n的顺序表L，编写一个时间复杂度为O(n)、空间复杂度
	为O(1)的算法，该算法删除线性表中所有为x的数据元素
*/
void DelElemBy_x(SeqL* L, int x);
/*
	4.从有序顺序表中删除值在给定区间（s-t）之间的所有元素，要求
	s<t。若s和t不合法或者顺序表为空，则显示错误并推出运行。
	5.该题仅要求包含s与t的值
*/
void DelElemBt_s_t(SeqL* L, int s, int t);
/*
	6.从有序顺序表中删除删除所有其值重复的元素，使表中的元素的
	值均不相同。
*/
void DelRepElem(SeqL* L);