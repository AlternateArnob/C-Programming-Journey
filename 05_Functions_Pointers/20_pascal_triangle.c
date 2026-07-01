// Ques: Pascal Triangle

/*
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1
*/

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

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    // Using i <= n prints one extra line.
    // We use i < n to print exactly n lines.

    for(int i = 0; i < n; i++)
    {
        for(int k = 1; k <= n - i - 1; k++)
        {
            printf(" ");
        }

        for(int j = 0; j <= i; j++)
        {
            int iCj = nCr(i, j);
            printf("%d ", iCj);
        }
        printf("\n");
    }
    return 0;
}
