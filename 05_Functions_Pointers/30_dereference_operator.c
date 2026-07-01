// Dereference operator
// The * operator accesses and modifies the value stored at the address held by a pointer.

#include <stdio.h>

int main()
{
    int a = 25;

    int *x;
    x = &a;

    // *x = &a; // Incorrect: *x stores a value, not an address.

    printf("Address of a = %p\n", &a);
    printf("Address stored in x = %p\n\n", x);

    printf("Value pointed to by x = %d\n\n", *x);

    // We can access the value using *x.
    // Can we also update the value using *x?

    *x = 7; // a is changed

    printf("Value pointed to by x = %d\n", *x);

    // *x is called the dereference operator.
    // It accesses the value stored at the memory address held by x.
    return 0;
}

// x  → Where is the value?
// *x → What is the value at that address?
