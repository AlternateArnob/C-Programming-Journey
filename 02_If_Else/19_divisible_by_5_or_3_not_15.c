// Ques: Take positive integer input and tell if it
// is divisible by 5 or 3 but not divisible by 15. (using multiple conditions)

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // First check: number is divisible by 5 or 3 -> (n % 5 == 0 || n % 3 == 0)
    // Then check: number is not divisible by 15 -> n % 15 != 0
    if((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        printf("The number is divisible by 5 or 3 but not 15\n");
    }
    else
    {
        printf("The number doesn't match the required condition\n");
    }
    return 0;
}

// Parentheses are used to evaluate the OR condition first.
// Without parentheses, && has higher precedence than ||.
// Operator precedence: && > ||.
