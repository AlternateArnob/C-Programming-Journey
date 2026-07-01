// Dereferencing pointers
// The * operator accesses the value stored at the address held by a pointer.

#include <stdio.h>

int main()
{
    int a = 5;

    int *x = &a;

    printf("Address of a = %p\n", &a);
    printf("Address stored in x = %p\n\n", x);

    printf("Address of x = %p\n\n", &x);

    printf("Value pointed to by x = %d\n\n", *x);
    return 0;
}
