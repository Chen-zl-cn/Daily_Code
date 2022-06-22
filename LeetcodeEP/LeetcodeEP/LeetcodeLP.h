#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//leetcode1480_method_1
int* runningSum(int* nums, int numsSize, int* returnSize);
//leetcode1480_method_2
int* runningSum_2(int* nums, int numsSize, int* returnSize);
//leetcode383_method_1
int canConstruct(char* ransomNote, char* magazine);
//leetcode383_method_2
int canConstruct_2(char* ransomNote, char* magazine);
//leetcode412_method_1
char** fizzBuzz(int n, int* returnSize);
//leetcode876_method_1
struct ListNode {
	int val;
	struct ListNode* next;
};
struct ListNode* middleNode(struct ListNode* head);