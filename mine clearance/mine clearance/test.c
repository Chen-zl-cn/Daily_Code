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
	//雷的信息存储
	//布置好雷的信息
	char mine[ROWS][COLS] = { 0 };//11 * 11的数组
	//存储排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//布置地雷
	SetMine(mine, ROWS, COLS);
	//检查棋盘上面是否有大片空白，若有则直接展开
	CheckBoard(mine, show, ROW, COL);
	//打印
	DisplayBoard(show, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input == 1);
}


int main()
{
	test();
	return 0;
}