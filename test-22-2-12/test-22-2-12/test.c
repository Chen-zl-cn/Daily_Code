#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//8
//	printf("%d\n", sizeof(&arr + 1));//8
//	printf("%d\n", sizeof(&arr[0] + 1));//8
//
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


//дһ��������������һ���ַ���������
//#include <string.h>
//#include <assert.h>
//#include <stdio.h>
//
//void reverse(char arr[])
//{
//	assert(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256];
//	printf("������һ���ַ���:>");
//	gets(arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������
//
//#include <stdio.h>
//
//int Add(int a)
//{
//	int Sn = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		ret = ret * 10 + a;
//		Sn += ret;
//	}
//	return Sn;
//}
//
//int main()
//{
//	int a = 0;
//	printf("������һ������:>");
//	scanf("%d", &a);
//	printf("%d", Add(a));
//	return 0;
//}


