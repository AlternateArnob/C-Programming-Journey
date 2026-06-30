// Ternary Operator
// expression 1 ? expression 2 : expression 3

// Even or odd?

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // General approach:
    // if(n % 2 == 0)
    //     printf("Even number\n");
    // else
    //     printf("Odd number\n");

    // Ternary Operator:
    n % 2 == 0 ? printf("Even number\n") : printf("Odd number\n");
    return 0;
}
