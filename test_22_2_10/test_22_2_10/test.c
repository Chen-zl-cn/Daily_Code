
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
//	//�׵���Ϣ�洢
//	//���ú��׵���Ϣ
//	char mine[ROWS][COLS] = { 0 };//11*11������
//	//�洢�Ų���׵���Ϣ
//	char show[ROWS][COLS] = { 0 };
//	//��ʼ������
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//	//��ӡ
//	DisplayBoard(show, ROW, COL);
//	//���õ���
//	SetMine(mine, ROWS, COLS);
//	//ɨ��
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳�");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//ð������
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