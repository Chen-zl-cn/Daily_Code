#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

//模拟实现strstr字符串查找

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
//			return cur;//找到
//		}
//		cur++;
//	}
//	return NULL;//找不到
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

////交换两个变量，不创建临时变量
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}//要考虑溢出的风险


//方法二
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
//sep参数是个字符串，定义了用作分隔符的字符集合
// 第一个参数制定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记
// strtok函数找到str中的下一个标记，并将其用'\0'结尾，返回一个指向这个标记的指针
// 注：strtok函数会改变这个被操作的字符串，所以使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改
// strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok将保存它在字符串中的位置
// strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
// 如果字符串中不存在更多的标记，则返回NULL指针

//例子
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

//strerror函数
// 错误码 - 错误信息
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
//		printf("%s\n", strerror(errno));//errno是一个全局的错误码变量，当C语言的库函数在执行的过程中发生了错误，就会把错误码赋值到errno中
//	}
//	return 0;
//}

