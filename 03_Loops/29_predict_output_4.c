// Predict the output

#include <stdio.h>

int main()
{
    int x = 4, y, z;
    y = --x; // change first, use later
    z = x--; // use first, change later
    printf("\n%d %d %d", x, y, z);
    return 0;
}

// Output:
// 2 3 3

// See 38_increment_decrement.c to learn more about this.
