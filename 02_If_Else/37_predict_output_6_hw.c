// HW: Predict the output

#include <stdio.h>

int main()
{
    int a = 5, b, c;
    b = a = 15; // b = 15, a = 15
    c = a < 15; // false = 0
    printf("\na = %d b = %d c = %d", a, b, c);
    return 0;
}

// Output:
//
// a = 15 b = 15 c = 0
