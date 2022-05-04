#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//C语言文件操作
//在程序设计中，我们一般谈的有两种：程序文件和数据文件
// 程序文件：包括源程序文件（后缀为.c）。目标文件（后缀为.ojb）。可执行程序（Windows环境后缀为.exe）
// 数据文件：文件的内容不一定是程序，而是程序运行时读写的数据。
// 本章考虑的是数据文件
// 
// 文件名：文件路径+文件名主干+文件后缀
// 文件类型：文本文件或者二进制文件（数据在内存中以二进制的形式存储，如果不加转换的输出到外存，就是二进制文件
//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//wb表示以二进制写入，pf为文件指针
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件缓冲区
//ANSIC标准采用“缓冲文件系统”处理数据文件，所谓缓冲文件系统是指系统自动的在内存中为程序中每一个正在
// 使用的文件开辟一块“文件缓冲区”。从内存向磁盘输出数据会先送到内存中的缓冲区，装满缓冲区后才一起送到磁盘上
// 从磁盘向计算机读入数据亦如此，缓冲区大小由编译器决定
// 
// 文件指针
// 每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名字、文件状态及文件当前的位置等）
// 这些信息是保存在一个结构体变量中的。该结构体是由系统声明的，取名为FILE
// 
// 文件的打开和关闭
//

//int main()
//{
//	//打开文件text.txt
//	//相对路径
//	//..表示上一级路径
//	//.表示当前路径
//	//fopen("../test.txt","r");
//	//fopen("test.txt","r");
//	//绝对路径的写法
//	//fopen("全部路径","r");
//
//	FILE* pf = fopen("test.txt", "w");//打开失败会返回空指针
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//打开成功
//		//写文件
//		fputc('h', pf);
//		fputc('e', pf);
//		fputc('h', pf);
//		fputc('e', pf);
//		//关闭文件
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");//打开失败会返回空指针
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//打开成功
//		//读文件
//		fgets(buf, 1024, pf);
//		printf("%s", buf);
//		//关闭文件
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");//打开失败会返回空指针
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//打开成功
//		//写文件
//		fputs("hello\n", pf);
//		fputs("world\n", pf);
//		//关闭文件
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//带格式写入文件

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

//带格式读取文件
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

//scanf\printf 是针对标准输入流/标准输出流的格式化输入/输出语句
// fscanf\fprintf 是针对所有输入流/输出流的格式化输入/输出语句
// sscanf 是从字符串中读取格式化数据
// sprintf 是把格式化数据输出成（存储到）字符串
//