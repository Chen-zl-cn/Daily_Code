#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//C�����ļ�����
//�ڳ�������У�����һ��̸�������֣������ļ��������ļ�
// �����ļ�������Դ�����ļ�����׺Ϊ.c����Ŀ���ļ�����׺Ϊ.ojb������ִ�г���Windows������׺Ϊ.exe��
// �����ļ����ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݡ�
// ���¿��ǵ��������ļ�
// 
// �ļ������ļ�·��+�ļ�������+�ļ���׺
// �ļ����ͣ��ı��ļ����߶������ļ����������ڴ����Զ����Ƶ���ʽ�洢���������ת�����������棬���Ƕ������ļ�
//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//wb��ʾ�Զ�����д�룬pfΪ�ļ�ָ��
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ļ�������
//ANSIC��׼���á������ļ�ϵͳ�����������ļ�����ν�����ļ�ϵͳ��ָϵͳ�Զ������ڴ���Ϊ������ÿһ������
// ʹ�õ��ļ�����һ�顰�ļ��������������ڴ������������ݻ����͵��ڴ��еĻ�������װ�����������һ���͵�������
// �Ӵ���������������������ˣ���������С�ɱ���������
// 
// �ļ�ָ��
// ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ������֡��ļ�״̬���ļ���ǰ��λ�õȣ�
// ��Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ������ϵͳ�����ģ�ȡ��ΪFILE
// 
// �ļ��Ĵ򿪺͹ر�
//

//int main()
//{
//	//���ļ�text.txt
//	//���·��
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("../test.txt","r");
//	//fopen("test.txt","r");
//	//����·����д��
//	//fopen("ȫ��·��","r");
//
//	FILE* pf = fopen("test.txt", "w");//��ʧ�ܻ᷵�ؿ�ָ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//�򿪳ɹ�
//		//д�ļ�
//		fputc('h', pf);
//		fputc('e', pf);
//		fputc('h', pf);
//		fputc('e', pf);
//		//�ر��ļ�
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");//��ʧ�ܻ᷵�ؿ�ָ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//�򿪳ɹ�
//		//���ļ�
//		fgets(buf, 1024, pf);
//		printf("%s", buf);
//		//�ر��ļ�
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");//��ʧ�ܻ᷵�ؿ�ָ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//�򿪳ɹ�
//		//д�ļ�
//		fputs("hello\n", pf);
//		fputs("world\n", pf);
//		//�ر��ļ�
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//����ʽд���ļ�

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"hello" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//����ʽ��ȡ�ļ�
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//		printf("%d %f %s", s.n, s.score, s.arr);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//scanf\printf ����Ա�׼������/��׼������ĸ�ʽ������/������
// fscanf\fprintf ���������������/������ĸ�ʽ������/������
// sscanf �Ǵ��ַ����ж�ȡ��ʽ������
// sprintf �ǰѸ�ʽ����������ɣ��洢�����ַ���
//