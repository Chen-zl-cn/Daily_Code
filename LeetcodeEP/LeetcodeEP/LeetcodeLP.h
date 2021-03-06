#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

//leetcode1342_method_1
int numberOfSteps(int num);

//leetcode1672_method_1
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize);

//leetcode1700_method_1
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize);
//leetcode1700_method_2
int countStudents_2(int* students, int studentsSize, int* sandwiches, int sandwichesSize);