// Pass by reference
// Passing addresses of variables allows a function to modify the original values.

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x; // temp = a
    *x = *y; // a = b
    *y = temp; // b = temp
    return;
}

int main()
{
    int a = 2;
    int b = 9;

    swap(&a, &b); // passing addresses (references) of a and b

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}
