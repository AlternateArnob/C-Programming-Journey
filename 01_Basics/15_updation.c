#include <stdio.h>

int main()
{
    // int x; // declaration
    // x = 5; // assigning a value

    // we can do this in one line.

    int x = 5; // declaration + initialization
    printf("%d", x); // 5

    x = 7; // update
    printf("\n%d", x); // 7

    x = x + 5; // update
    printf("\n%d", x); // 12

    x = x - 12; // update
    printf("\n%d", x); // 0
    return 0;
}

// Output:
// 5
// 7
// 12
// 0
