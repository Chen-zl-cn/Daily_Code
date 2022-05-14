#include "List.h"

//初始化顺序表
void InitList(SL* L)
{
	L->data = (int*)malloc(DEFAULT_SZ * sizeof(int));
	L->MaxSize = MAX_SZ;
	L->length = 0;
}
//顺序表指定位置插入
int InsertList(SL* L, int i, int e)
{
	if (i<1 || i>L->length + 1)
	{
		printf("插入失败\n");
		return 0;
	}
	else if (L->length >= L->MaxSize)
	{
		printf("插入失败\n");
		return 0;
	}
	for (int j = L->length; j >= i; j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = e;
	L->length++;
}

//删除最小元素
int DelMinElem(SL* L)
{
	if (L->length == 0)
	{
		printf("表为空\n");
		return -1;
	}
	int tmp = L->data[L->length - 1];
	int inx = 0;
	for (int i = L->length; i >= 1; i--)
	{
		if (L->data[i - 1] < tmp)
		{
			tmp = L->data[i - 1];
			inx = i - 1;
		}
	}
	for (int j = inx; j < L->length - 1; j++)
	{
		L->data[j] = L->data[j + 1];
	}
	L->length--;
	return tmp;
}

//逆置顺序表
void Reverse(SL* L)
{
	int left = 0;
	int right = L->length - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = L->data[left];
		L->data[left] = L->data[right];
		L->data[right] = tmp;
		left++;
		right--;
	}
}

//删除指定位置的元素
int ListDel(SL* L, int i)
{
	if (i<1 || i>L->length)
	{
		printf("要删除的第%d个元素不存在", i);
		return 0;
	}
	for (int j = i; j <= L->length; j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->length--;
	return 1;
}

//删除指定大小的所有元素
void DelFitElem(SL* L, int e)
{
	int flag = 0;
	do
	{
		flag = 0;
		for (int i = 1; i <= L->length; i++)
		{
			if (L->data[i - 1] == e)
			{
				flag++;
				for (int j = i; j <= L->length; j++)
				{
					L->data[j - 1] = L->data[j];
				}
				L->length--;
				break;
			}
		}

	} while (flag != 0);
}

//打印表
int PrintList(SL* L)
{
	if (L->length == 0)
	{
		return 0;
	}
	for (int i = 1; i <= L->length; i++)
	{
		printf("%d ", L->data[i - 1]);
	}
	printf("\n");
	return 1;
}

//销毁顺序表
void DestoryList(SL* L)
{
	free(L->data);
	L->data = NULL;
}

//修改表中第i个元素为e
int ChangeList(SL* L, int i, int e)
{
	if (i<1 || i>L->length)
	{
		printf("要修改的第%d个元素不存在\n", i);
		return 0;
	}
	L->data[i - 1] = e;
	return 1;
}

//按值查找
void LocateElem(SL* L, int e)
{
	for (int i = 1; i <= L->length; i++)
	{
		if (L->data[i - 1] == e)
		{
			printf("%d是第%d个元素\n", e, i);
			break;
		}
	}
}