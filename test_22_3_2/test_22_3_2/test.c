#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�洢ϵ��
	int arr_2[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char arr_3[] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int arr_4[200] = { 0 };
	int i = 0;
	//����T
	int T = 0;
	while (1)
	{
		scanf("%d", &T);
		if (T > 0 && T <= 100)
		{
			break;
		}
	}
	//����T�����֤�ţ����֤�Ŵ洢���ַ�������
	for (i = 0; i < T; i++)
	{
		//��������һ�����ж��ٸ���ȷ
		int count_1 = 0;
		char arr_1[20] = { 0 };
		scanf("%s", arr_1);
	//ʵ�ֶ����֤����ȷ�����ж�
		
		//�ж�һ�����֤���ж��ٸ�*
		int count = 0;//��������һ�����֤�����ж��ٸ�*
		int j = 0;
		for (j = 0; j < 18; j++)
		{
			if (arr_1[j] == '*')
			{
				count++;
			}
		}
		int k = 0;
		int l = 0;
		int m = 0;
		switch(count)
		{
		case 1:
			for (k = 0; k <= 9; k++)
			{
				int add = 0;
				for (j = 0; j < 17; j++)
				{
					if (arr_1[j] != '*')
					{
						add += (arr_1[j] - 48) * arr_2[j];
					}
					else
					{
						add += k * arr_2[j];
					}
				}
				int tmp = add % 11;
				if (tmp == 0)
				{
					if (arr_1[17] == arr_3[0])
						count_1++;

				}
				else if (tmp == 1)
				{
					if (arr_1[17] == arr_3[1])
						count_1++;
				}
				else if (tmp == 2)
				{
					if (arr_1[17] == arr_3[2])
						count_1++;
				}
				else if (tmp == 3)
				{
					if (arr_1[17] == arr_3[3])
						count_1++;
				}
				else if (tmp == 4)
				{
					if (arr_1[17] == arr_3[4])
						count_1++;
				}
				else if (tmp == 5)
				{
					if (arr_1[17] == arr_3[5])
						count_1++;
				}
				else if (tmp == 6)
				{
					if (arr_1[17] == arr_3[6])
						count_1++;
				}
				else if (tmp == 7)
				{
					if (arr_1[17] == arr_3[7])
						count_1++;
				}
				else if (tmp == 8)
				{
					if (arr_1[17] == arr_3[8])
						count_1++;
				}
				else if (tmp == 9)
				{
					if (arr_1[17] == arr_3[9])
						count_1++;
				}
				else if (tmp == 10)
				{
					if (arr_1[17] == arr_3[10])
						count_1++;
				}
			}
			break;
		case 2:
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					int q = 2;
					int add = 0;
					for (j = 0; j < 17; j++)
					{
						if (arr_1[j] != '*')
						{
							add += (arr_1[j] - 48) * arr_2[j];
						}
						else
						{
							if (q%2 == 0)
							{
								add += k * arr_2[j];
								q++;
							}
							else
							{
								add += l * arr_2[j];
								q++;
							}
							
						}
					}
					int tmp = add % 11;
					if (tmp == 0)
					{
						if (arr_1[17] == arr_3[0])
							count_1++;

					}
					else if (tmp == 1)
					{
						if (arr_1[17] == arr_3[1])
							count_1++;
					}
					else if (tmp == 2)
					{
						if (arr_1[17] == arr_3[2])
							count_1++;
					}
					else if (tmp == 3)
					{
						if (arr_1[17] == arr_3[3])
							count_1++;
					}
					else if (tmp == 4)
					{
						if (arr_1[17] == arr_3[4])
							count_1++;
					}
					else if (tmp == 5)
					{
						if (arr_1[17] == arr_3[5])
							count_1++;
					}
					else if (tmp == 6)
					{
						if (arr_1[17] == arr_3[6])
							count_1++;
					}
					else if (tmp == 7)
					{
						if (arr_1[17] == arr_3[7])
							count_1++;
					}
					else if (tmp == 8)
					{
						if (arr_1[17] == arr_3[8])
							count_1++;
					}
					else if (tmp == 9)
					{
						if (arr_1[17] == arr_3[9])
							count_1++;
					}
					else if (tmp == 10)
					{
						if (arr_1[17] == arr_3[10])
							count_1++;
					}
				}
			}
			break;
		case 3:
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					for (m = 0; m <= 9; m++)
					{
						int q = 0;
						int add = 0;
						for (j = 0; j < 17; j++)
						{
							if (arr_1[j] != '*')
							{
								add += (arr_1[j] - 48) * arr_2[j];
							}
							else
							{
								if (q == 0)
								{
									add += k * arr_2[j];
									q = 1;
								}
								else if(q == 1)
								{
									add += l * arr_2[j];
									q = 2;
								}
								else if (q == 2)
								{
									add += m * arr_2[j];
									q = 0;
								}

							}
						}
						int tmp = add % 11;
						if (tmp == 0)
						{
							if (arr_1[17] == arr_3[0])
								count_1++;

						}
						else if (tmp == 1)
						{
							if (arr_1[17] == arr_3[1])
								count_1++;
						}
						else if (tmp == 2)
						{
							if (arr_1[17] == arr_3[2])
								count_1++;
						}
						else if (tmp == 3)
						{
							if (arr_1[17] == arr_3[3])
								count_1++;
						}
						else if (tmp == 4)
						{
							if (arr_1[17] == arr_3[4])
								count_1++;
						}
						else if (tmp == 5)
						{
							if (arr_1[17] == arr_3[5])
								count_1++;
						}
						else if (tmp == 6)
						{
							if (arr_1[17] == arr_3[6])
								count_1++;
						}
						else if (tmp == 7)
						{
							if (arr_1[17] == arr_3[7])
								count_1++;
						}
						else if (tmp == 8)
						{
							if (arr_1[17] == arr_3[8])
								count_1++;
						}
						else if (tmp == 9)
						{
							if (arr_1[17] == arr_3[9])
								count_1++;
						}
						else if (tmp == 10)
						{
							if (arr_1[17] == arr_3[10])
								count_1++;
						}
					}
				}
			}
			break;
		default:
			break;
		}
		arr_4[i] = count_1;
	}
	for (i = 0; i < T; i++)
	{
		printf("%d\n", arr_4[i]);
	}
	return 0;
}