// Predict the output

#include <stdio.h>

int main()
{
    float x = 1.1;

    while(x == 1.1)
    {
        printf("\n%f", x);
        x = x - 0.1;
    }
    return 0;
}

// Output:
// No output (in most cases).

// Floating point numbers should not be compared using ==
// because decimal values may not be stored exactly.

// This problem applies to if, while, for and any place
// where we compare floating point numbers using ==.

// see 39_float_precision_problem.c to learn more about it.
