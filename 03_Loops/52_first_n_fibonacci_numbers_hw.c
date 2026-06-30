// HW: Print first ‘n’ fibonacci numbers.

// Fibonacci Series 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 1; // 1st term
    int b = 1; // 2nd term
    int sum = 1;

    if(n == 1)
        printf("1 ");
    else if(n >= 2)
        printf("1 1 ");

    for(int i = 3; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }
    return 0;
}
