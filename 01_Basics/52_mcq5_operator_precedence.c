// MCQ 5:
// a = 7 / 22 * (3.14 + 2) * 3 / 5
// Answer: 0

#include <stdio.h>

int main()
{
    float a = 7 / 22 * (3.14 + 2) * 3 / 5;

    printf("a = %f\n", a); // 0.000000
    return 0;
}

// 7 / 22 = 0 (integer division)
// Therefore the entire expression becomes 0.
