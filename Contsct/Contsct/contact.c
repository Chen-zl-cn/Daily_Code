#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//初始化通讯录
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//通讯录最初只有0个元素
}

//添加通讯录信息
void AddContact(struct Contact* ps)
{
	if (ps->size >= MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入姓名>:\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入电话>:\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入性别>:\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入地址>:\n");
		scanf("%s", ps->data[ps->size].addr);
		printf("请输入年龄>:\n");
		scanf("%s", &(ps->data[ps->size].age));

		ps->size++;
		printf("添加成功！\n");
	}
}

//显示通讯录
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}