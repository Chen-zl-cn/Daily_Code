#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ļ��������ȡ
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		//��λ�ļ�ָ��
//		fseek(pfRead, 4, SEEK_CUR);
//		//�ļ���ȡ
//		char ch = fgetc(pfRead);
//		printf("%c\n", ch);
//		//�ر��ļ�
//		fclose(pfRead);
//		pfRead = NULL;
//	}
//	return 0;
//}

//ftell
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		//��λ�ļ�ָ��
//		fseek(pfRead, 4, SEEK_CUR);
//		int pos = ftell(pfRead);//����ָ�뵱ǰƫ����
//		printf("%d\n", pos);
//		//�ر��ļ�
//		fclose(pfRead);
//		pfRead = NULL;
//	}
//	return 0;
//}

//rewind(pf)���ļ�ָ��pf�ص���ʼλ��

//