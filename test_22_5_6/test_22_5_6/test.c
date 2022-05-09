#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//文件的随机读取
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		//定位文件指针
//		fseek(pfRead, 4, SEEK_CUR);
//		//文件读取
//		char ch = fgetc(pfRead);
//		printf("%c\n", ch);
//		//关闭文件
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
//		//定位文件指针
//		fseek(pfRead, 4, SEEK_CUR);
//		int pos = ftell(pfRead);//返回指针当前偏移量
//		printf("%d\n", pos);
//		//关闭文件
//		fclose(pfRead);
//		pfRead = NULL;
//	}
//	return 0;
//}

//rewind(pf)让文件指针pf回到起始位置

//