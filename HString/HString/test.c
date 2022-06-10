#include "HString.h"

int main() {
	char arr[] = "When the beating of your heart Echoes the beating of the drums";
	char arr_1[] = "of";
	HString S;
	HString T;
	StrAssign(&S, arr);
	StrAssign(&T, arr_1);
	printf("%d\n", Index(&S, &T));
	return 0;
}