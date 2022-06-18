#include "LeetcodeLP.h"

//leetcode1480_method_1
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* tmp = (int*)malloc(sizeof(int) * numsSize);
    if (tmp == NULL)
        return NULL;
    else
    {
        int i = 0;
        while (i < numsSize)
        {
            int j = 0;
            int sum = 0;
            for (j = 0; j <= i; j++)
            {
                sum = sum + nums[j];
            }
            tmp[i] = sum;
            i++;
        }
        return tmp;
        free(tmp);
    }
}

//leetcode1480_method_2
int* runningSum_2(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    for (int j = 1; j < numsSize; j++) {
        nums[j] += nums[j - 1];
    }
    return nums;
}

//leetcode383_method_1
int canConstruct(char* ransomNote, char* magazine) {
    while (*ransomNote) {
        int tmp = strlen(magazine);
        int i = 0;
        for (i = 0; i < tmp; i++) {
            if (magazine[i] == *ransomNote) {
                magazine[i] = "A";
                break;
            }
        }
        if (i == tmp) {
            return 0;
        }
        ransomNote++;
    }
    return 1;
}

//leetcode383_method_2
int canConstruct_2(char* ransomNote, char* magazine) {
    if (strlen(magazine) < strlen(ransomNote)) {
        return 0;
    }
    int count_1[26] = { 0 };
    int count_2[26] = { 0 };
    while (*ransomNote) {
        count_1[(int)(*ransomNote - 'a')]++;
        ransomNote++;
    }
    while (*magazine) {
        count_2[(int)(*magazine - 'a')]++;
        magazine++;
    }
    int i = 0;
    while (i < 26) {
        if (count_1[i] > count_2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

//leetcode412_method_1
char** fizzBuzz(int n, int* returnSize) {
    char** answer = (char**)malloc(sizeof(char*) * n);
    *returnSize = n;
    for (int j = 1; j < n + 1; j++)
    {
        answer[j - 1] = (char**)malloc(sizeof(char*) * 9);
        if (j % 3 == 0 && j % 5 == 0)
            answer[j - 1] = "FizzBuzz";
        else if (j % 3 == 0)
            answer[j - 1] = "Fizz";
        else if (j % 5 == 0)
            answer[j - 1] = "Buzz";
        else
            sprintf(answer[j - 1], "%d", j);
    }
    return answer;
}
