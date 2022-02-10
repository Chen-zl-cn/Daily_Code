#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define ROWS ROW+2
#define COL 9
#define COLS COL+2
#define EASY 10

void InitBoard(char board[ROWS][COLS], int row, int col, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FineMine(char mine[ROWS][COLS], char show[ROW][COL], int row, int col);