#define ABS 64//��������������ֵ-������
#define ORD 64//������
#define GRD 3//����ڵ�ȼ����ֵ
#include <stdio.h>
#include <math.h>

//��һ���ڵ���Χ�ĸ��μ��ڵ�����ĺ���
//�����������ʼ�ڵ�ĺ����ꡢ�����ꡢ�洢����Χ�ڵ����������ĵ�ַ������������ĵ�ַ
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
	//�������Ľڵ�
	int x_o = ABS / 2;
	int y_o = ORD / 2;
	//����һ���ڵ���������
	int abs_1[4] = { 0 };
	int ord_1[4] = { 0 };
	//�������Ľڵ���Χ���ĸ�һ���ڵ�����
	SRD_1(x_o, y_o, abs_1, ord_1);
	//��������ڵ���������
	int abs_2[16] = { 0 };
	int ord_2[16] = { 0 };
	//����һ���ڵ��������飬��һ���ڵ����괫��SRD_2������ö����ڵ㲢�洢
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		SRD_2(x_o, abs_1[i], ord_1[i], abs_2 + 4 * i, ord_2 + 4 * i);
	}
	//���������ڵ���������
	int abs_3[64] = { 0 };
	int ord_3[64] = { 0 };
	//���������ڵ��������飬�������ڵ����괫��SRD_2������������ڵ㲢�洢
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
	printf("һ���ڵ�����");
	for (i = 0; i < 4; i++)
	{
		printf("��%d,%d��  ", abs_1[i], ord_1[i]);
	}
	printf("\n");
	printf("�����ڵ�����");
	for (i = 0; i < 16; i++)
	{
		printf("��%d,%d��  ", abs_2[i], ord_2[i]);
	}
	printf("\n");
	printf("�����ڵ�����");
	for (i = 0; i < 64; i++)
	{
		printf("��%d,%d��  ", abs_3[i], ord_3[i]);
	}
	return 0;
}