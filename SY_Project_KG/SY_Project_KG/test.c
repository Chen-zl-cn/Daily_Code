#define ABS 64//定义坐标轴的最大值-横坐标
#define ORD 64//纵坐标
#define GRD 3//定义节点等级最大值
#include <stdio.h>
#include <math.h>

//求一个节点周围四个次级节点坐标的函数
//输入参数：初始节点的横坐标、纵坐标、存储其周围节点横坐标数组的地址、纵坐标数组的地址
void SRD_1(int x_o, int y_o, int abs[], int ord[])
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int unit = x_o / 2;;
		switch (i)
		{
		case 0:
			abs[i] = x_o - unit;
			ord[i] = y_o - unit;
			break;
		case 1:
			abs[i] = x_o + unit;
			ord[i] = y_o - unit;
			break;
		case 2:
			abs[i] = x_o - unit;
			ord[i] = y_o + unit;
			break;
		case 3:
			abs[i] = x_o + unit;
			ord[i] = y_o + unit;
			break;

		}
	}
}

int JueDuiZhi(int a)
{
	if (a >= 0)
	{
		return a;
	}
	else
		return -a;
}

void SRD_2(int x_o_o,int x_o, int y_o, int abs[], int ord[])
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int unit = JueDuiZhi(x_o - x_o_o) / 2;
		switch (i)
		{
		case 0:
			abs[i] = x_o - unit;
			ord[i] = y_o - unit;
			break;
		case 1:
			abs[i] = x_o + unit;
			ord[i] = y_o - unit;
			break;
		case 2:
			abs[i] = x_o - unit;
			ord[i] = y_o + unit;
			break;
		case 3:
			abs[i] = x_o + unit;
			ord[i] = y_o + unit;
			break;

		}
	}
}

int main()
{
	//定义中心节点
	int x_o = ABS / 2;
	int y_o = ORD / 2;
	//定义一级节点坐标数组
	int abs_1[4] = { 0 };
	int ord_1[4] = { 0 };
	//计算中心节点周围的四个一级节点坐标
	SRD_1(x_o, y_o, abs_1, ord_1);
	//定义二级节点坐标数组
	int abs_2[16] = { 0 };
	int ord_2[16] = { 0 };
	//遍历一级节点坐标数组，将一级节点坐标传入SRD_2函数求得二级节点并存储
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		SRD_2(x_o, abs_1[i], ord_1[i], abs_2 + 4 * i, ord_2 + 4 * i);
	}
	//定义三级节点坐标数组
	int abs_3[64] = { 0 };
	int ord_3[64] = { 0 };
	//遍历二级节点坐标数组，将二级节点坐标传入SRD_2函数求得三级节点并存储
	for (i = 0; i < 16; i++)
	{
		if (i < 4)
		{
			SRD_2(abs_1[0], abs_2[i], ord_2[i], abs_3 + 4 * i, ord_3 + 4 * i);
		}
		else if (i < 8)
		{
			SRD_2(abs_1[1], abs_2[i], ord_2[i], abs_3 + 4 * i, ord_3 + 4 * i);
		}
		else if (i < 12)
		{
			SRD_2(abs_1[2], abs_2[i], ord_2[i], abs_3 + 4 * i, ord_3 + 4 * i);
		}
		else if (i < 16)
		{
			SRD_2(abs_1[3], abs_2[i], ord_2[i], abs_3 + 4 * i, ord_3 + 4 * i);
		}
	}
	printf("一级节点坐标");
	for (i = 0; i < 4; i++)
	{
		printf("（%d,%d）  ", abs_1[i], ord_1[i]);
	}
	printf("\n");
	printf("二级节点坐标");
	for (i = 0; i < 16; i++)
	{
		printf("（%d,%d）  ", abs_2[i], ord_2[i]);
	}
	printf("\n");
	printf("三级节点坐标");
	for (i = 0; i < 64; i++)
	{
		printf("（%d,%d）  ", abs_3[i], ord_3[i]);
	}
	return 0;
}