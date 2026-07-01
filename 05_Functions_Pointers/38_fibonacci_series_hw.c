// HW: Print first ‘n’ fibonacci numbers.

#include <stdio.h>

void print_fibonacci(int n)
{
    int a = 1;
    int b = 1;
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
    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers: ", n);
    print_fibonacci(n);
    return 0;
}
