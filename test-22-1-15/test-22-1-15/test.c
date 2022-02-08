#include <stdio.h>



//设计一个程序反映当前机器的字节序
int check_sys()
{
	int a = 1;
	return *(char*)&a;//返回1，小端。返回0，大端。
	
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
}