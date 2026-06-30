// HW: Taking two numbers as input from the user and printing their sum.

#include <stdio.h>

int main()
{
    int x;
    printf("Enter first number: ");
    scanf("%d", &x);

    int y;
    printf("Enter second number: ");
    scanf("%d", &y);

    int sum = x + y;
    printf("Sum of the numbers you entered is: %d\n", sum);
    return 0;
}
