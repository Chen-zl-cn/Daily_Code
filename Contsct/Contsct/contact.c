#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//ͨѶ¼���ֻ��0��Ԫ��
}

//���ͨѶ¼��Ϣ
void AddContact(struct Contact* ps)
{
	if (ps->size >= MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("����������>:\n");
		scanf("%s", ps->data[ps->size].name);
		printf("������绰>:\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������Ա�>:\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("�������ַ>:\n");
		scanf("%s", ps->data[ps->size].addr);
		printf("����������>:\n");
		scanf("%s", &(ps->data[ps->size].age));

		ps->size++;
		printf("��ӳɹ���\n");
	}
}

//��ʾͨѶ¼
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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