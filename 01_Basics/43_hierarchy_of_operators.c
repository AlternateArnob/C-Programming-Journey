// Hierarchy of operators with precedence and associativity

#include <stdio.h>

int main()
{
    // Operators follow precedence:
    // [B, O, D/M, A/S]
    // Similar to mathematics.

    // But there is a small difference:

    // *, /, % have the same precedence.

    // (2*3)/4 = 1.5
    // 2*(3/4) = 1.5
    // Both are same in maths.

    // But in computer, those are different:
    // (2*3)/4 = 1
    // 2*(3/4) = 0

    // Computer calculates from left to right when operators have the same precedence (associativity).
    // 2*3/4 = 1 in computer.


    // Remember this ?
    float x = 3/4;
    printf("x = %f\n", x); // predict output ? // 0.000000
    x = 3.0/4;
    printf("x = %f\n", x); // correct now // 0.750000


    // computer calculates from left to right at same precedence (associativity).
    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
    // i = 1 + 1 + 8 - 2 + 0; // 8

    printf("i = %d\n", i); // 8
    return 0;
}

// Output:
// x = 0.000000
// x = 0.750000
// i = 8

// Note: '*' '/' '%' have same precedence and they evaluate left to right
// This is called associativity
