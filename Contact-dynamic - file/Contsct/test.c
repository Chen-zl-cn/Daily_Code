#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void menu()
{
	printf("\n");
	printf("******************************************\n");
	printf("*****    1.add              2.del    *****\n");
	printf("*****    3.serch            4.modify *****\n");
	printf("*****    5.show             6.sort   *****\n");
	printf("*****    7.save             0.exit   *****\n");
	printf("******************************************\n");
	printf("\n");
}


int main()
{
int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortCont(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			//销毁通讯录（释放动态申请的内存）
			SaveContact(&con);
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input != 0);
	return 0;
}