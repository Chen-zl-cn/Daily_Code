#include "LeetcodeLP.h"


int main()
{
    int tmp = 0;
    char** p = fizzBuzz(5, &tmp);
    for (int i = 0; i < 5; i++) {
        printf("%s ", p[i]);
    }
    return 0;
}
