#include<stdio.h>

//test
////声明一个结构体类型
////声明一个学生类型，是想通过学生类型来创建学生变量（对象）
////描述学生：属性-名字+电话+性别+年龄
//
//struct Stu//这是结构体标签
//{
//	char name[20];//这些内容为结构体的成员变量
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//创建全局结构体变量
//
//struct Stu s3;//创建全局结构体变量
//
//
////匿名结构体类型
////如果同样的匿名结构体类型重复声明两次时，编译器会把这两次的声明视作两个不同的结构体类型
//struct
//{
//	int a;
//	char c;
//}x;//匿名结构体类型结构体变量只能在这里创建
//
////结构体的自引用
////结构体中不能存在自己的变量，如下会报错
////struct Node
////{
////	int a;
////	struct Node n;
////};
//
////正确的自引用方法是放入指针
//struct Node
//{
//	int a;
//	struct Node* n;
//};
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

////结构体重命名
//typedef struct Node
//{
//	int data;
//	struct Node* next;//尽管结构体重命名为Node了，但是在这里，还是要使用原名，因为程序还没走到重命名那一步
//}Node;

////结构体变量的定义和初始化
//
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c',100,3.14,"hello" };//结构体变量的初始化
//	//结构体成员的访问
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	return 0;
//}

////结构体中包含其他结构体变量时的初始化和成员访问
//
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s1 = { 'c',{55.6,30},100,3.14,"hello" };
//	printf("%lf\n", s1.st.weight);
//	return 0;
//}

//结构体内存对齐（详细看视频），存在默认对齐数，可通过pragma pack()修改

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

#include <stddef.h>

int main()
{
	/*struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));*/
	printf("%d\n", offsetof(struct S2, c1));//用来输出结构体中结构体成员存储的偏移量，头文件如上
	return 0;
}