#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

//ģ��ʵ��strstr�ַ�������

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1);
//	assert(p2);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ���
//}
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	printf("%s", ret);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d", a, b);
//	return 0;
//}

////����������������������ʱ����
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}//Ҫ��������ķ���


//������
//int main()
//{
//	int a = 1;//0001
//	int b = 2;//0010
//	a = a ^ b;//0011
//	b = a ^ b;//0001
//	a = a ^ b;//0010
//	printf("%d %d", a, b);
//	return 0;
//}


//char* strtok(char* str, const char* sep);
//sep�����Ǹ��ַ����������������ָ������ַ�����
// ��һ�������ƶ�һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı��
// strtok�����ҵ�str�е���һ����ǣ���������'\0'��β������һ��ָ�������ǵ�ָ��
// ע��strtok������ı�������������ַ���������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸�
// strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok�����������ַ����е�λ��
// strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
// ����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��

//����
//int main()
//{
//	char* p1 = "198.122.32.112";
//	char* p2 = "abc@defg.hikl";
//	char* p3 = "@.";
//	char arr[1024] = { 0 };
//	char arr_2[1024] = { 0 };
//	strcpy(arr, p1);
//	strcpy(arr_2, p2);
//	char* ret = NULL;
//	for (ret = strtok(arr, p3); ret != NULL; ret = strtok(NULL, p3))
//	{
//		printf("%s\n", ret);
//	}
//	for (ret = strtok(arr_2, p3); ret != NULL; ret = strtok(NULL, p3))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror����
// ������ - ������Ϣ
//0 - No error
//1 - Operation not permitted
//2 - No such file or directory

//int main()
//{
//	char* ret = strerror(2);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	FILE* pFile = fopen("text.text", "r");
//	if (pFile == NULL)
//	{
//		printf("%s\n", strerror(errno));//errno��һ��ȫ�ֵĴ������������C���ԵĿ⺯����ִ�еĹ����з����˴��󣬾ͻ�Ѵ����븳ֵ��errno��
//	}
//	return 0;
//}

