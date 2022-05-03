#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DEFAULT_SZ 3//Ĭ��������С
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

//������Ϣ����
struct PeoInfo
{
	char name[NAME_MAX];
	char tele[TELE_MAX];
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	int age;
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo* data;//�������
	int size;//��¼ͨѶ¼��С
	int capacity;//��¼Ŀ¼�������
};

//��������
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortCont(struct Contact* ps);
void DestoryContact(struct Contact* ps);