#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#define MAX 500
#define NAME_MAX 20
#define TELE_MAX 12
#define SEX_MAX 5
#define ADDR_MAX 30

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
	struct PeoInfo data[MAX];//�������
	int size;//��¼ͨѶ¼��С
};

//��������
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);