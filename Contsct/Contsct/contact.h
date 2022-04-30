#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#define MAX 500
#define NAME_MAX 20
#define TELE_MAX 12
#define SEX_MAX 5
#define ADDR_MAX 30

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
	struct PeoInfo data[MAX];//存放数据
	int size;//记录通讯录大小
};

//声明函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);