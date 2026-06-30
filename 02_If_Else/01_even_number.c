// Control Statements or Conditionals.

// Ques: Take positive integer input and tell if it is even.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check whether n is divisible by 2.
    // A number divisible by 2 has remainder 0.
    if(n % 2 == 0)
    {
        printf("%d is an even number\n", n);
    }
    return 0;
}

// Any number divisible by 2 is an even number.

// Note: This program only checks whether the number is even.
// Odd numbers produce no output.
