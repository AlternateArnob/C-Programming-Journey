// HW: Print the factorials of first ‘n’ numbers

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

void print_factorials(int n)
{
    for(int i = 0; i <= n; i++)
    {
        printf("%d! = %d\n", i, factorial(i));
    }
    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    print_factorials(n);
    return 0;
}
