#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* ch;
	int len;
}HString;

//����ֵ
int StrAssign(HString* S, char* T);
//��λ��������ƥ��
int Index(HString* S, HString* T);
//��λ������KMP
int Index_KMP(HString* S, HString* T);