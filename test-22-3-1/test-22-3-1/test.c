#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//memcpy()的使用
//struct S
//{
//	char name[20];
//	int age;
//};
//
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	struct S arr3[2] = { {"张三",20},{"李四",12} };
//	struct S arr4[2] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//memcpy()的模拟

void* my_memcpy(void* dest, const void* src, size_t count)
{
	assert(dest);
	assert(src);
	void* ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

struct S
{
	char name[20];
	int age;
};

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { {"张三",20},{"李四",15} };
	struct S arr4[3] = { 0 };
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}
