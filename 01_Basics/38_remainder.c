// Example: Take two integers a and b (a > b),
// find the remainder when a is divided by b, and print it.

#include <stdio.h>

int main()
{
    int a, b; // a > b

    printf("Enter Dividend: ");
    scanf("%d", &a);

    printf("Enter Divisor: ");
    scanf("%d", &b);

    int q = a / b; // Quotient
    int r = a - b * q;

    printf("The remainder when %d is divided by %d is: %d\n", a, b, r);
    return 0;
}

// Divisor * Quotient + Remainder = Dividend
// => Remainder = Dividend - (Divisor * Quotient)
// => r = a - (b * q)
