// Predict the output

#include <stdio.h>

int main()
{
    int x = 3, y, z;
    y = x = 10; // x = 10, y = 10
    z = x < 10; // false = 0
    printf("\nx = %d y = %d z = %d", x, y, z);
    return 0;
}

// Output:
//
// x = 10 y = 10 z = 0

// See the next file to learn boolean data type.
