#include <stdio.h>

int main()
{
    int x = 5;
    printf("x = %d\n", x); // 5

    // WRONG (undefined behavior): %d is not for addresses
    printf("&x = %d\n", &x); // Undefined behavior

    // Actually the correct format specifier for an address is %p.
    printf("&x = %p\n", &x); // &x -> address of x

    int y;
    printf("Enter a number: ");
    scanf("%d", &y); // &y is the address of y.
    printf("The number you entered is: %d\n", y);

    int z;
    printf("Enter a number: ");
    scanf("%d", z); // Undefined behavior because scanf expects the address of z (&z).
    // May cause a segmentation fault
    printf("The number you entered is: %d\n", z);
    return 0;
}

// scanf("%d", &y);
// Meaning: give me an input and pass the address of y so scanf can store the value there.
