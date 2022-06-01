#include "SeqList.h"

//初始化顺序表
void InitList(SeqL* L)
{
	L->data = (int*)malloc(INITSIZE * sizeof(int));
	L->maxsize = MAXSIZE;
	L->length = 0;
}

//求顺序表表长
int Length(SeqL* L)
{
	return L->length;
}

//输出顺序表
void PrintList(SeqL* L)
{
	if (L->length > 0)
	{
		for (int i = 0; i < L->length; i++)
		{
			printf("%d ", L->data[i]);
			if (i % 4 == 0 && i >= 4)
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("NULL\n");
	}
	printf("\n");
	printf("\n");
}

//在顺序表尾增加元素
void AddList(SeqL* L, int e)
{
	L->data[L->length] = e;
	L->length++;
}

//在顺序表中指定位置插入元素
void InsertList(SeqL* L, int i, int e)
{
	//判断顺序表容量是否已经满了(需更改）
	if (L->length == INITSIZE)
	{
		L->data = (int*)realloc(L->data, (L->length + 10) * sizeof(int));
	}
	else if (L->length != 0 && i <= L->length)
	{
		for (int j = L->length - 1; j >= i - 1; j--)
		{
			L->data[j + 1] = L->data[j];
		}
		L->data[i - 1] = e;
		L->length++;
	}
	else
	{
		printf("wrong");
	}
}

//删除顺序表中指定位置元素
int ListDelByLoc(SeqL* L, int i)
{
	if (L->length > 0 && i < L->length)
	{
		for (int j = i; j < L->length; j++)
		{
			L->data[j - 1] = L->data[j];
		}
		L->length--;
		return 1;
	}
	else if (L->length > 0 && i == L->length)
	{
		L->data[L->length - 1] = 0;
		L->length--;
		return 1;
	}
	else
	{
		return 0;
	}
}

//删除顺序表中指定元素
int ListDelByElem(SeqL* L, int e)
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		if (L->data[i] == e)
		{
			break;
		}
	}
	if (i == L->length)
	{
		return 0;
	}
	for (int j = i; j < L->length; j++)
	{
		L->data[j] = L->data[j + 1];
	}
	L->length--;
	return 1;
}

//修改顺序表中指定位置元素
int ListModifyByLoc(SeqL* L, int i, int e)
{
	if (L->length > 0 && i <= L->length)
	{
		L->data[i - 1] = e;
		return 1;
	}
	return 0;
}

/*按值查找
找到后返回在顺序表中的位置
没找到返回-1
*/
int GetElem(SeqL* L, int e)
{
	for (int j = 0; j < L->length; j++)
	{
		if (L->data[j] == e)
		{
			return j + 1;
		}
	}
	return -1;
}

//按位查找
int LocElem(SeqL* L, int i)
{
	if (L->length > 0 && i <= L->length)
	{
		return L->data[i - 1];
	}
	return -1;
}

//销毁顺序表
void DestoryList(SeqL* L)
{
	free(L->data);
	L->data = NULL;
}

/*
	以下为王道数据结构2.1综合应用题
*/

/*
	1.从顺序表中删除具有最小值的元素（假设唯一）并由函数返回
	被删除元素的值。空出的位置由最后一个元素填补，若顺序表为
	空，则显示出错信息并退出运行。
*/
int DelMinElem(SeqL* L)
{
	if (L->length == 0)
	{
		printf("顺序表为空\n");
		return -1;
	}
	else
	{
		int tmp = L->data[0];
		for (int i = 0; i < L->length; i++)
		{
			if (L->data[i] < tmp)
			{
				tmp = L->data[i];
			}
		}
		L->data[GetElem(L, tmp) - 1] = L->data[L->length - 1];
		return tmp;
	}
}

/*
	2.设计一个高效算法将顺序表L的所有元素逆置，要求算法的空间
	复杂度为O(1)
*/
void ReverseList(SeqL* L)
{
	int left = 0;
	int right = L->length - 1;
	while (left < right)
	{
		int tmp = 0;
		tmp = L->data[left];
		L->data[left] = L->data[right];
		L->data[right] = tmp;
		left++;
		right--;
	}
}
/*
	3.对长度为n的顺序表L，编写一个时间复杂度为O(n)、空间复杂度
	为O(1)的算法，该算法删除线性表中所有为x的数据元素
	2 3 4 1 5 1
*/
void DelElemBy_x(SeqL* L, int x)
{
	int tmp = 0;
	for (int j = 0; j < L->length; j++)
	{
		if (x == L->data[j])
		{
			tmp++;
		}
		else
		{
			L->data[j - tmp] = L->data[j];
		}
	}
	L->length = L->length - tmp;
}
/*
	4.从有序表中删除值在给定区间（s-t）之间的所有元素，要求s<t。
	若s和t不合法或者顺序表为空，则显示错误并推出运行。
*/
void DelElemBt_s_t(SeqL* L, int s, int t)
{
	if (L->length == 0)
	{
		printf("顺序表为空\n");
	}
	else if (s >= t)
	{
		printf("给定区间不合法\n");
	}
	else
	{
		int tmp = 0;
		for (int i = 0; i < L->length; i++)
		{
			if (L->data[i] >= s && L->data[i] <= t)
			{
				tmp++;
			}
			else
			{
				L->data[i - tmp] = L->data[i];
			}
		}
		L->length = L->length - tmp;
	}
}
/*
	6.从有序顺序表中删除删除所有其值重复的元素，使表中的元素的
	值均不相同。1 2 2 2 3 4 5 5 ->1 2 3 4 5
*/
void DelRepElem(SeqL* L)
{
	if (L->length == 0)
	{
		printf("顺序表为空\n");
	}
	else
	{
		int i = 0;
		int j = 0;
		for ( j = 1; j < L->length; j++)
		{
			if (L->data[i] != L->data[j])
			{
				L->data[++i] = L->data[j];
			}
		}
		L->length = i + 1;
	}
}