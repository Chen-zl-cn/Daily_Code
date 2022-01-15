#include "game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	for (i = 0; i <= col; i++)
	{
		printf("%d  ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY;
	
	while (count)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int NumOfMine(char mine[ROWS][COLS], int x, int y)
{
	int ret = mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';	
		return ret;
	
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < ROW*COL - EASY)
	{
		printf("请输入坐标：>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int ret = 0;
				ret = NumOfMine(mine, x, y);
				show[x][y] = '0' + ret;
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
			printf("坐标不合法\n");
	}
	if (win == ROW * COL - EASY)
	{
		printf("扫雷成功！\n");
		DisplayBoard(mine, row, col);
	}
	
}


void CheckBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	int ret_1 = 0;
	for (i = 2; i <= row - 1; i++)
	{
		for (j = 2; j <= col - 1; j++)
		{
			ret_1 = NumOfMine(mine, i, j);
			if (mine[i][j] != '1')
			{
				if (ret_1 == 0)
				{
					show[i][j] = '0';
					ret = NumOfMine(mine, i - 1, j - 1);
					show[i - 1][j - 1] = ret + '0';
					ret = NumOfMine(mine, i - 1, j);
					show[i - 1][j] = ret + '0';
					ret = NumOfMine(mine, i - 1, j + 1);
					show[i - 1][j + 1] = ret + '0';
					ret = NumOfMine(mine, i, j - 1);
					show[i][j - 1] = ret + '0';
					ret = NumOfMine(mine, i, j + 1);
					show[i][j + 1] = ret + '0';
					ret = NumOfMine(mine, i + 1, j - 1);
					show[i + 1][j - 1] = ret + '0';
					ret = NumOfMine(mine, i + 1, j);
					show[i + 1][j] = ret + '0';
					ret = NumOfMine(mine, i + 1, j + 1);
					show[i + 1][j + 1] = ret + '0';
					break;
				}
			}
			else
				continue;
		}
	}
}






