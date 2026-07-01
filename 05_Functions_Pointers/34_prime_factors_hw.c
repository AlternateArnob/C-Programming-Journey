// HW: A positive integer is entered through the
// keyboard. Write a function to obtain the prime
// factors of this number.

#include <stdio.h>

void prime_factors(int n)
{
    printf("Prime factors: ");
    for(int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
    return;
}

int main()
{
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    prime_factors(n);
    return 0;
}

// Sample Output:
// Enter a positive number: 60
// Prime factors: 2 2 3 5
