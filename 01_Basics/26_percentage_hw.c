// HW: Print percentage of 4 subjects where marks are out of 40.

#include <stdio.h>

int main()
{
    float m1 = 31, m2 = 33, m3 = 39, m4 = 35;
    float p = (m1 + m2 + m3 + m4) / 160 * 100;
    printf("Percentage of 4 subjects is: %.2f ",p);
    return 0;
}

// Output:
// Percentage of 4 subjects is: 86.25
