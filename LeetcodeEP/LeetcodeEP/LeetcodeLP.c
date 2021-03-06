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
    if (answer == NULL)
        return NULL;
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

//leetcode876_method_1
struct ListNode* middleNode(struct ListNode* head) {
    int count = 0;
    struct ListNode* p = head;
    while (p->next) {
        count++;
        p = p->next;
    }
    p = head;
    if (count % 2 == 0) {
        for (int i = 0; i < count / 2; i++) {
            p = p->next;
        }
    }
    else {
        for (int i = 0; i <= count / 2; i++) {
            p = p->next;
        }
    }
    return p;
}
//leetcode876_method_2
struct ListNode* middleNode_2(struct ListNode* head) {
    struct ListNode* fast = head, *slow = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
//leetcode1342_method_1
int numberOfSteps(int num) {
    int count = 0;
    while (num) {
        if (num % 2 == 0) {
            num /= 2;
            count++;
        }
        else {
            num -= 1;
            count++;
        }
    }
    return count;
}
//leetcode1672_method_1
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int sum = 0;
    for (int i = 0; i < accountsSize; i++) {
        int tmp = 0;
        for (int j = 0; j < *accountsColSize; j++) {
            tmp += accounts[i][j];
        }
        if (tmp >= sum) {
            sum = tmp;
        }
    }
    return sum;
}
//leetcode1700_method_1
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    while (1) {
        if (students[0] == sandwiches[0]) {
            students++;
            sandwiches++;
            studentsSize--;
            sandwichesSize--;
        }
        else if (students[0] != sandwiches[0]) {
            int tmp = students[0];
            for (int j = 1; j < studentsSize; j++) {
                students[j - 1] = students[j];
            }
            students[studentsSize - 1] = tmp;
        }
        int i = 0;
        for (i = 0; i < studentsSize; i++) {
            if (students[i] != sandwiches[0]) {
                ;
            }
            else {
                break;
            }
        }
        if (i == studentsSize) {
            break;
        }
    }
    return studentsSize;
}
//leetcode1700_method_2
int countStudents_2(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int count = 0;
    while (1) {
        int i = 0;
        for (i = 0; i < studentsSize; i++) {
            if (students[i] == sandwiches[0]) {
                students[i] = 3;
                sandwiches++;
                count++;
                break;
            }
        }
        if (i == studentsSize) {
            break;
        }
    }
    return studentsSize - count;
}