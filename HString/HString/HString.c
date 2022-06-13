#include "HString.h"

//串赋值，将常量字符串T赋值给S
int StrAssign(HString* S, char* T) {
	int len = (int)strlen(T);
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

//定位操作，KMP
//next数组
void get_next(HString* T, int next[]) {
	int i = 1, j = 0;
	next[1] = 0;
	while (i < T->len) {
		if (j == 0 || T->ch[i] == T->ch[j]) {
			++i; ++j;
			next[i] = j;
		}
		else {
			j = next[j];
		}
	}
}

int Index_KMP(HString* S, HString* T) {
	int* next = (int*)malloc(sizeof(int) * strlen(T));
	get_next(T, next);
	int i = 1, j = 1;
	while (i <= S->len && j <= T->len) {
		if (j == 0 || S->ch[i - 1] == T->ch[j - 1]) {
			++i; ++j;
		}
		else {
			j = next[j];
		}
	}
	if (j > T->len) {
		return i - T->len;
	}
	else
		return 0;
}