// Pointer variables
// A pointer variable stores a memory address.

#include <stdio.h>

int main()
{
    // This variable is created in memory when execution reaches this declaration.
    int a = 5;

    printf("a = %d\n", a);

    // %p is the format specifier used to print memory addresses.
    printf("Address of a = %p\n\n", &a);

    int b = 5;

    printf("b = %d\n", b);
    printf("Address of b = %p\n\n", &b);

    // Although a and b store the same value,
    // they have different memory addresses.

    // Can we store a memory address?
    // Yes, we can store it in a pointer variable.

    int *x = &a; // x stores the address of a.
    // Both "int *x" and "int* x" are valid declarations.

    printf("Address stored in x = %p\n", x);
    printf("Address of x = %p\n", &x);
    return 0;
}

// Notes:
// &a gives the address of a.
// x stores the address of a.
// &x gives the address of the pointer variable x.
// A pointer variable stores a memory address.
