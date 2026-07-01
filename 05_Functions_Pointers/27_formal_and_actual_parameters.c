// Formal parameters and Actual Parameters

#include <stdio.h>

// Formal parameters a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int a = 2;
    int b = 9;

    swap(a, b);
    // Passing the actual parameters (arguments) a and b to the formal parameters.

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}

// Here:
// a and b in swap() are the formal parameters.
// a and b in swap(a, b) are the actual parameters (arguments).
