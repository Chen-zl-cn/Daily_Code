#include <stdio.h>
#include <stdlib.h>

//leetcode1480-method_1
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

//leetcode1480-method_2
int* runningSum2(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    for (int j = 1; j < numsSize; j++) {
        nums[j] += nums[j - 1];
    }
    return nums;
}

int main()
{
    int nums[5] = { 1,1,1,1,1 };
    int numsSize = 5;
    int returnSize = 0;
    int* tmp = runningSum2(nums, 5, &returnSize);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", tmp[i]);
    }
    return 0;
}
