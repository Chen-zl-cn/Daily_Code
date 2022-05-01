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
		scanf("%d", &(ps->data[ps->size].age));

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

//查找函数
static int FindByName(const struct Contact* ps, char name[NAME_MAX])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->data[i].name))
		{
			return i;
		}
	}
	return -1;
}

//删除指定联系人
void DelContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("请输入你要删除的人的名字>:\n");
	scanf("%s", name);
	//查找该名字用户
	//定义查找函数，找到返回下标，未找到返回-1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("用户不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		printf("删除成功\n");
		ps->size--;
	}
}



//查找指定联系人
void SearchContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("请输入你要查找的人的名字>:\n");
	scanf("%s", name);
	//查找该名字用户
	//定义查找函数，找到返回下标，未找到返回-1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("用户不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
			"姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//修改指定用户
void ModifyContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("请输入你要修改的人的名字>:\n");
	scanf("%s", name);
	//查找该名字用户
	//定义查找函数，找到返回下标，未找到返回-1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("用户不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
			"姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("\n");
		printf("请修改\n");
		printf("请输入姓名>:\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入电话>:\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入性别>:\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入地址>:\n");
		scanf("%s", ps->data[pos].addr);
		printf("请输入年龄>:\n");
		scanf("%d", &(ps->data[pos].age));
		printf("修改成功\n");
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
			"姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//按姓名排序
static void SortByName(struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			if (strlen(ps->data[j].name) < strlen(ps->data[j + 1].name))
			{
				struct PeoInfo tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
	}
}

//按年龄排序
static void SortByAge(struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			if (ps->data[j].age < ps->data[j + 1].age)
			{
				struct PeoInfo tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
	}
}

//排序
void SortCont(struct Contact* ps)
{
	int input = 0;
	printf("1.姓名**2.年龄\n");
	printf("请输入排序方式>:\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		SortByName(ps);
		printf("排序完成\n");
		break;
	case 2:
		SortByAge(ps);
		printf("排序完成\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
}