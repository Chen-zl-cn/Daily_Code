#include <stdio.h>



//���һ������ӳ��ǰ�������ֽ���
int check_sys()
{
	int a = 1;
	return *(char*)&a;//����1��С�ˡ�����0����ˡ�
	
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
		printf("���\n");
}