#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char* ch;
	int len;
}HString;

//����ֵ
int StrAssign(HString* S, char* T);
//��λ����
int Index(HString* S, HString* T);