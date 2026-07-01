// Another example of a function with parameters and a return value.

#include <stdio.h>

int power(int x, int y)
{
    int pow = 1;
    for(int i = 1; i <= y; i++)
    {
        pow *= x;
    }
    return pow;
}

int main()
{
    int a;
    printf("Enter the base: ");
    scanf("%d", &a);

    int b;
    printf("Enter the exponent: ");
    scanf("%d", &b);

    int pow = power(a, b);

    printf("%d to the power %d is = %d\n", a, b, pow);
    return 0;
}
