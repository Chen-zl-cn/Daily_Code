#include "queue.h"

int main()
{
	int ret = 0;
	sqQueue Q;
	InitQueue(&Q);
	for (int i = 0; i < 6; i++)
	{
		EnQueue(&Q, i);
	}
	while (isEmpty(&Q) == 0)
	{
		DeQueue(&Q, &ret);
		printf("%d ", ret);
	}
	return 0;
}