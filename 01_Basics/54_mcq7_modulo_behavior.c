// MCQ 7:
// x = 4 + 2 % -8
// Answer: 6

#include <stdio.h>

int main()
{
    int x = 4 + 2 % -8;

    printf("x = %d\n", x); // 6
    return 0;
}

// Since |2| < |8|,
// 2 % -8 evaluates to 2.
