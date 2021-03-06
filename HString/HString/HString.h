#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* ch;
	int len;
}HString;

//串赋值
int StrAssign(HString* S, char* T);
//定位操作暴力匹配
int Index(HString* S, HString* T);
//定位操作，KMP
int Index_KMP(HString* S, HString* T);