#include<stdio.h>

//test
////����һ���ṹ������
////����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
////����ѧ��������-����+�绰+�Ա�+����
//
//struct Stu//���ǽṹ���ǩ
//{
//	char name[20];//��Щ����Ϊ�ṹ��ĳ�Ա����
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//����ȫ�ֽṹ�����
//
//struct Stu s3;//����ȫ�ֽṹ�����
//
//
////�����ṹ������
////���ͬ���������ṹ�������ظ���������ʱ����������������ε���������������ͬ�Ľṹ������
//struct
//{
//	int a;
//	char c;
//}x;//�����ṹ�����ͽṹ�����ֻ�������ﴴ��
//
////�ṹ���������
////�ṹ���в��ܴ����Լ��ı��������»ᱨ��
////struct Node
////{
////	int a;
////	struct Node n;
////};
//
////��ȷ�������÷����Ƿ���ָ��
//struct Node
//{
//	int a;
//	struct Node* n;
//};
//
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

////�ṹ��������
//typedef struct Node
//{
//	int data;
//	struct Node* next;//���ܽṹ��������ΪNode�ˣ��������������Ҫʹ��ԭ������Ϊ����û�ߵ���������һ��
//}Node;

////�ṹ������Ķ���ͳ�ʼ��
//
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c',100,3.14,"hello" };//�ṹ������ĳ�ʼ��
//	//�ṹ���Ա�ķ���
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	return 0;
//}

////�ṹ���а��������ṹ�����ʱ�ĳ�ʼ���ͳ�Ա����
//
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s1 = { 'c',{55.6,30},100,3.14,"hello" };
//	printf("%lf\n", s1.st.weight);
//	return 0;
//}

//�ṹ���ڴ���루��ϸ����Ƶ��������Ĭ�϶���������ͨ��pragma pack()�޸�

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

#include <stddef.h>

int main()
{
	/*struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));*/
	printf("%d\n", offsetof(struct S2, c1));//��������ṹ���нṹ���Ա�洢��ƫ������ͷ�ļ�����
	return 0;
}