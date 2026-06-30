#include <stdio.h>

int main()
{
    int a = 41; // a > b
    int b = 6;

    int r = a % b; // normal remainder
    printf("r = %d\n", r); // 5


    int p = 2; // p < q
    int q = 6;

    r = p % q; // Since p < q, the remainder is p itself.
    printf("r = %d\n", r); // 2


    int x = 21; // y = 0
    int y = 0;

    r = x % y; // what!! It prints x on my compiler!!
    // But isn't division/modulo by zero undefined?
    // Yes. Modulo by zero is undefined behavior in C.
    // The output is not guaranteed and depends on the compiler/system.
    // Never rely on this result.

    printf("r = %d\n", r); // 21
    return 0;
}

// Output:
// r = 5
// r = 2
// r = 21
