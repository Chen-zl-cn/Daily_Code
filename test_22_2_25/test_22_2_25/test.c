#include <stdio.h>
#include <assert.h>


//模拟实现strcmp

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	if (ret > 0)
//	{
//		printf("str1>str2");
//	}
//	else if (ret < 0)
//	{
//		printf("str1<str2");
//	}
//	else
//		printf("str1=str2");
//	return 0;
//}


//模拟实现strncpy

void my_strncpy(char arr1[], const char arr2[], int n)
{
	assert(arr1 && arr2);
	int len = strlen(arr2);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (i < len)
		{
			arr1[i] = arr2[i];
		}
		else
		{
			arr1[i] = '\0';
		}
	}
}

int main()
{
	char arr1[14] = "hello world";
	char arr2[] = "oh";
	my_strncpy(arr1, arr2, 6);
	printf("%s", arr1);
	return 0;
}

//找源码文件进行仿写