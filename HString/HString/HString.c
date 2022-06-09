#include "HString.h"

//串赋值，将常量字符串T赋值给S
int StrAssign(HString* S, char* T) {
	int len = 0;
	char* tmp = T;
	while (*tmp) {
		tmp++;
		len++;
	}
	if (len == 0) {
		S->ch = NULL;
		S->len = 0;
		return 1;
	}
	else {
		S->ch = (char*)malloc(sizeof(char) * (len + 1));
		if (S->ch == NULL)
			return 0;
		for (int i = 0; i <= len; i++) {
			S->ch[i] = T[i];
		}
		S->len = len;
		return 1;
	}
}

//定位操作（暴力匹配）
int Index(HString* S, HString* T) {
	int i = 0, j = 0;
	while (i < S->len && j < T->len) {
		if (S->ch[i] == T->ch[j]) {
 			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
	if (j == T->len)
		return i - j;
	return 0;
}