// Example: Calculating Simple Interest

#include <stdio.h>

int main()
{
    float p, r, t, si; // Declared 4 variables in 1 line.

    p = 100;
    r = 10;
    t = 2;
    si = (p * r * t) / 100;
    printf("%f", si);
    return 0;
}

// Output:
// 20.000000
