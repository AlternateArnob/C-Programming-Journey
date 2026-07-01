// Pass by value

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

    // Passing the values of n and r as arguments to combination().
    int nCr = combination(n, r);

    printf("nCr = %d\n", nCr);
    return 0;
}

// The n and r in main() are different from the n and r in combination().
// The n and r in combination() are local variables of that function.
// The values of n and r from main() are passed as arguments to combination().
// This is called pass by value.
