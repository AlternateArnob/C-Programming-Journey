// Print the nth fibonacci number.

// Fibonacci Series 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a term number: ");
    scanf("%d", &n);

    int a = 1; // 1st term
    int b = 1; // 2nd term
    int sum = 1;

    for(int i = 3; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }

    if(n == 1)
        printf("The 1st Fibonacci number is %d\n", a);
    else if(n == 2)
        printf("The 2nd Fibonacci number is %d\n", b);
    else if(n == 3)
        printf("The 3rd Fibonacci number is %d\n", sum);
    else
        printf("The %dth Fibonacci number is %d\n", n, sum);
    return 0;
}
