#include <stdio.h>
#include <assert.h>


//求一个整数存储在内存中的二进制数中1的个数

//此处提供方法以32位为例：
//在计算机中整数的存储是以32位二进制数来表示的，比如1的二进制数为00000000000000000000000000000001
// 2的二进制数为00000000000000000000000000000010,3为00000000000000000000000000000011
// 那么我们首先可以把该数与1按位与，这样我们就可以判断该数的二进制位最低位是否为一
// 而后我们可以将该数进行算数右移，之后再与1按位与，可判断该数二进制数的第二位是否为一
// 以此类推，完成对32位二进制数的判断
//

//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	int count = 0;//计数用
//	while (a)//当a的二进制序列全为0时停止
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d", count);//输出将为2
//	return 0;
//}

//算术右移>>
//算术右移即将该数的二进制序列向右移动一位，左边补0
//例子：

//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	a = a >> 1;//将a算术右移一位，得到00000000000000000000000000000001
//	printf("%d", a);//a = 1
//	return 0;
//}

//按位与&
// 按位与即将两数的二进制序列对应位相比，相同为1，相异为0
//例子：

//int main()
//{
//	int a = 5;//    00000000000000000000000000000101
//	int b = 9;//    00000000000000000000000000001001
//	int c = a & b;//00000000000000000000000000000001——c=1
//	printf("%d", c);
//	return 0;
//}


//模拟实现strcpy

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

//模拟实现strlen

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

//模拟实现strcat

char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	//1.找到目的地里面的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加
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