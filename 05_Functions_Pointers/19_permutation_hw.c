// HW: Permutation

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

int permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

int main()
{
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    // int nPr = factorial(n) / factorial(n - r);

    int nPr = permutation(n, r);

    printf("nPr = %d\n", nPr);
    return 0;
}
