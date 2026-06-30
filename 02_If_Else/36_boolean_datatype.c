#include <stdio.h>
#include <stdbool.h> // Header file for boolean data type

int main()
{
    bool x = true; // 1
    printf("x = %d\n", x); // 1
    x = false; // 0
    printf("x = %d\n", x); // 0


    // Predict the output?
    int a = 3;
    printf("a = %d\n", a = 10); // 10
    // assigned 10 and printed it.


    // Predict the output?
    int b = 3;
    printf("b = %d\n", b == 10); // 0
    // compared b is equal to 10. result false(0). printed 0.


    // Predict the output?
    int c = 3;
    printf("c = %d\n", c < 10); // 1
    // compared c < 10. result true(1). printed 1.
    return 0;
}

// Output:
// x = 1
// x = 0
// a = 10
// b = 0
// c = 1
