#include <stdio.h>

//位段-通过结构体实现
//位段的成员可以是整形家族的成员，位段的空间上是按照4个字节（int）或者1个字节（int）来开辟的
//位段涉及很多不确定因素，位段不具有跨平台性，要写跨平台代码，最好不要使用位段

//struct S
//{
//	int a : 2;//a只需要占2个比特位
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//struct S1
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", (int)sizeof(s));//8
//	struct S1 s1 = { 0 };
//	printf("%d\n", (int)sizeof(s1));//3
//	return 0;
//}

//枚举
//把可能的取值一一例举出来
//

////枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量-默认从0开始，往下依次递增
//	MALE = 2,//也可以在这里定义初始值
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//}

//枚举优点
//1.增加代码可读性和可维护性
// 2.和#define比起来枚举有类型检查，更加严谨
// 3.防止了命名污染（封装）
// 4.便于调试
// 5.使用方便，一次可定义多个变量
//

//联合体（共用体）
//联和也是一种特殊的自定义类型，这种类型定义的变量也包含一系列的成员，
//特征是这些成员共用同一块空间，一个联合变量的大小，至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", (int)sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//联合体实现判断大小端

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	printf("%d\n", ret);
//	return 0;
//}