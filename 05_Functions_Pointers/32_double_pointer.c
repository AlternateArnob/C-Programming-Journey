#include <stdio.h>

int main()
{
    int a = 25;
    int *x = &a; // Address of integer
    // Single * is used to store the address of an integer

    // int *k = &x; // Wrong: &x is address of a pointer, not an integer.
    // Trying to store address of pointer inside pointer of integer

    int **y = &x; // Address of pointer
    // Double * is used to store the address of a pointer

    printf("&x = %p\n", &x);
    printf("y = %p\n\n", y);

    printf("a = %d\n", a);
    printf("*x = %d\n", *x);
    printf("**y = %d\n", **y);
    return 0;
}

// int *  -> stores address of an integer.
// int ** -> stores address of a pointer (int *).
