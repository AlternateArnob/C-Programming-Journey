// Variables are used as containers

#include <stdio.h>

int main()
{
    printf("Hello World\n");

    int x; // declaration
    x = 5; // assigning a value

    // predict the output?
    printf("x"); // what!! Printing x only
    printf("\n");

    // what about this?
    // printf(x); // error

    // Correct way:
    printf("%d", x); // 5
    // %d is a format specifier for int

    // predict output?
    x = 9;
    printf("\n");
    printf("%d", x);  // 9

    // This is called updation
    x = 200;
    printf("\n%d", x); // 200
    return 0;
}

// Output:
// Hello World
// x
// 5
// 9
// 200
