#include "game.h"


void menu()
{
	printf("**************************************\n");
	printf("**********      1.play      **********\n");
	printf("**********      0.exit      **********\n");
	printf("**************************************\n");
}


void game()
{
	//�׵���Ϣ�洢
	//���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11 * 11������
	//�洢�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//���õ���
	SetMine(mine, ROWS, COLS);
	//������������Ƿ��д�Ƭ�հף�������ֱ��չ��
	CheckBoard(mine, show, ROW, COL);
	//��ӡ
	DisplayBoard(show, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input == 1);
}


int main()
{
	test();
	return 0;
}