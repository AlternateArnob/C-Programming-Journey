// Break -> It is used to terminate a loop.

// Ques: WAP to check if a number is prime or composite.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 0;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            // printf("%d is a composite number\n", n);
            a = 1;
            break;
        }
    }
    if(n == 1)
        printf("1 is neither prime nor composite\n");
    else if(a == 0)
        printf("%d is a prime number\n", n);
    else
        printf("%d is a composite number\n", n);
    return 0;
}

// Composite check:
// 12 -> 1, 2, 3, 4, 6, 12 (6 factors)
//
// We check divisibility from 2 to n-1.
// If we find any factor, the number is composite.
//
// Before terminating the loop,
// we set a = 1 to remember that a factor was found.
//
// Example:
// n = 12
// Factor 2 is found.
// a becomes 1.
// Therefore, the number is composite.
//
// n = 7
// No factor is found.
// a remains 0.
// Therefore, the number is prime.
//
// Mathematical edge case:
// 1 is neither prime nor composite.
