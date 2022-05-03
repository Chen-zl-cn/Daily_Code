#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DEFAULT_SZ 3//默认容量大小
#define NAME_MAX 20
#define TELE_MAX 12
#define SEX_MAX 6
#define ADDR_MAX 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

//个人信息类型
struct PeoInfo
{
	char name[NAME_MAX];
	char tele[TELE_MAX];
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	int age;
};

//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放数据
	int size;//记录通讯录大小
	int capacity;//记录目录最大容量
};

//声明函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortCont(struct Contact* ps);
void DestoryContact(struct Contact* ps);