#include <stdio.h>
#include <assert.h>


//��һ�������洢���ڴ��еĶ���������1�ĸ���

//�˴��ṩ������32λΪ����
//�ڼ�����������Ĵ洢����32λ������������ʾ�ģ�����1�Ķ�������Ϊ00000000000000000000000000000001
// 2�Ķ�������Ϊ00000000000000000000000000000010,3Ϊ00000000000000000000000000000011
// ��ô�������ȿ��԰Ѹ�����1��λ�룬�������ǾͿ����жϸ����Ķ�����λ���λ�Ƿ�Ϊһ
// �������ǿ��Խ����������������ƣ�֮������1��λ�룬���жϸ������������ĵڶ�λ�Ƿ�Ϊһ
// �Դ����ƣ���ɶ�32λ�����������ж�
//

//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	int count = 0;//������
//	while (a)//��a�Ķ���������ȫΪ0ʱֹͣ
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d", count);//�����Ϊ2
//	return 0;
//}

//��������>>
//�������Ƽ��������Ķ��������������ƶ�һλ����߲�0
//���ӣ�

//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	a = a >> 1;//��a��������һλ���õ�00000000000000000000000000000001
//	printf("%d", a);//a = 1
//	return 0;
//}

//��λ��&
// ��λ�뼴�������Ķ��������ж�Ӧλ��ȣ���ͬΪ1������Ϊ0
//���ӣ�

//int main()
//{
//	int a = 5;//    00000000000000000000000000000101
//	int b = 9;//    00000000000000000000000000001001
//	int c = a & b;//00000000000000000000000000000001����c=1
//	printf("%d", c);
//	return 0;
//}


//ģ��ʵ��strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++){}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "atm";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//ģ��ʵ��strlen

//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	printf("%d", my_strlen("abcdefg"));
//	return 0;
//}

//ģ��ʵ��strcat

char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	//1.�ҵ�Ŀ�ĵ������'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++){}
	return ret;
}

int main()
{
	char arr1[10] = "abcde";
	char arr2[] = "fgh";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}