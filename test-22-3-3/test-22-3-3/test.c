#include <stdio.h>
#include <assert.h>
#include <memory.h>

//memmove的模拟
//void* my_memmove(char* dest, const char* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//memset的使用

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}