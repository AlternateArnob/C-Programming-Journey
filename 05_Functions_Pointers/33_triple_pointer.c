#include <stdio.h>

int main()
{
    int a = 25;
    int *x = &a; // Address of integer
    // Single * is used to store the address of an integer

    int **y = &x; // Address of pointer
    // Double * is used to store the address of a pointer

    int ***z = &y; // Address of a pointer to a pointer
    // Triple * is used to store the address of a pointer to a pointer.

    printf("a = %d\n", a);
    printf("*x = %d\n", *x);
    printf("**y = %d\n", **y);
    printf("***z = %d\n", ***z);
    return 0;
}

// int *  -> stores address of an integer.
// int ** -> stores address of a pointer (int *).
// int *** -> stores address of a pointer to a pointer (int **).
