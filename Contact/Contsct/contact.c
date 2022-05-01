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
		scanf("%d", &(ps->data[ps->size].age));

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

//���Һ���
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

//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("��������Ҫɾ�����˵�����>:\n");
	scanf("%s", name);
	//���Ҹ������û�
	//������Һ������ҵ������±꣬δ�ҵ�����-1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("�û�������\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		printf("ɾ���ɹ�\n");
		ps->size--;
	}
}



//����ָ����ϵ��
void SearchContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("��������Ҫ���ҵ��˵�����>:\n");
	scanf("%s", name);
	//���Ҹ������û�
	//������Һ������ҵ������±꣬δ�ҵ�����-1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("�û�������\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
			"����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//�޸�ָ���û�
void ModifyContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("��������Ҫ�޸ĵ��˵�����>:\n");
	scanf("%s", name);
	//���Ҹ������û�
	//������Һ������ҵ������±꣬δ�ҵ�����-1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("�û�������\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
			"����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("\n");
		printf("���޸�\n");
		printf("����������>:\n");
		scanf("%s", ps->data[pos].name);
		printf("������绰>:\n");
		scanf("%s", ps->data[pos].tele);
		printf("�������Ա�>:\n");
		scanf("%s", ps->data[pos].sex);
		printf("�������ַ>:\n");
		scanf("%s", ps->data[pos].addr);
		printf("����������>:\n");
		scanf("%d", &(ps->data[pos].age));
		printf("�޸ĳɹ�\n");
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
			"����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//����������
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

//����������
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

//����
void SortCont(struct Contact* ps)
{
	int input = 0;
	printf("1.����**2.����\n");
	printf("����������ʽ>:\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		SortByName(ps);
		printf("�������\n");
		break;
	case 2:
		SortByAge(ps);
		printf("�������\n");
		break;
	default:
		printf("�������\n");
		break;
	}
}