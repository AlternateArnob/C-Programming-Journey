// Ques: Combination

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

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    // int nCr = factorial(n) / (factorial(r) * factorial(n - r));

    int nCr = combination(n, r);

    printf("nCr = %d\n", nCr);
    return 0;
}
