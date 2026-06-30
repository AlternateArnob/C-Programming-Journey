// Ques: Take positive integer input and tell if it is greater than 5 or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 5)
    {
        printf("The number is greater than 5\n");
    }
    else
    {
        printf("The number is not greater than 5\n");
    }
    return 0;
}

// This problem has only one condition.
// What if there are 2 conditions?
// Example:
// Take a positive integer as input and tell whether it lies between 5 and 10.
// In this case we use logical operators -> && (and) and || (or).
