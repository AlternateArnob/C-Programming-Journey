// Find the remainder using the modulo (%) operator

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter Dividend: ");
    scanf("%d", &a);

    printf("Enter Divisor: ");
    scanf("%d", &b);

    // int q = a / b; // Quotient
    // int r = a - b * q;
    // printf("The remainder when %d is divided by %d is: %d", a, b, r);

    int r = a % b; // remainder in one line

    printf("The remainder when %d is divided by %d is: %d\n", a, b, r);
    return 0;
}

// % is called the modulo operator.
// It is used to calculate the remainder.
