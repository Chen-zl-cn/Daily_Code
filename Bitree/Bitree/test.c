#include "Bitree.h"`

int main() {
	BiTree T = NULL;
	CreatBiT(&T);
	PreOrder(T);
	printf("\n");
	PreOrder_Non_rec(T);
	return 0;
}