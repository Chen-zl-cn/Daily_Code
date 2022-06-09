#include "HString.h"

int main() {
	char arr[] = "ababcabcd";
	char arr_1[] = "abcd";
	HString S;
	HString T;
	StrAssign(&S, arr);
	StrAssign(&T, arr_1);
	printf("%d\n", Index(&S, &T));
	return 0;
}