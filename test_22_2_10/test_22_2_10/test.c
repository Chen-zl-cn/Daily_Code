
//#include "game.h"
//
//void menu()
//{
//	printf("############################\n");
//	printf("#########  1.play  #########\n");
//	printf("#########  0.exit  #########\n");
//	printf("############################\n");
//}
//
//void game()
//{
//	//雷的信息存储
//	//布置好雷的信息
//	char mine[ROWS][COLS] = { 0 };//11*11的数组
//	//存储排查出雷的信息
//	char show[ROWS][COLS] = { 0 };
//	//初始化棋盘
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//	//打印
//	DisplayBoard(show, ROW, COL);
//	//布置地雷
//	SetMine(mine, ROWS, COLS);
//	//扫雷
//	FineMine(mine, show, ROW, COL);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		srand((unsigned)time(NULL));
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//冒泡排序
#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}