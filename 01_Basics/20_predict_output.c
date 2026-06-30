// Concept: int / int = int

#include <stdio.h>

int main()
{
    float x = 5;
    float y = 2;

    float z = x / y;
    printf("%f\n", z); // 2.500000 All good.

    // But,
    // Predict the output.

    z = 5 / 2;
    printf("%f\n", z); // 2.000000 !!!!

    // What!! Why?
    // 5 and 2 both are int. int and int arithmetic operations result in an int.
    // That int result is then stored in z.
    return 0;
}

// Output:
// 2.500000
// 2.000000

// See the next files for an in-depth discussion.
