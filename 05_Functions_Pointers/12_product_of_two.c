// Another example of a function with parameters and a return value.

#include <stdio.h>

int product(int a, int b)
{
    return a * b;
}

int main()
{
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);

    int b;
    printf("Enter second number: ");
    scanf("%d", &b);

    int pro = product(a, b);

    printf("Product = %d\n", pro);
    return 0;
}
