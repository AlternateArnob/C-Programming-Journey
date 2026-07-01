// Ques: Write a function to compute the greatest
// common divisor of two given numbers

#include <stdio.h>

int min(int a, int b)
{
    if(a > b)
        return b;
    else
        return a;
}

// Way 01
int gcd(int a, int b)
{
    int hcf = 1;
    for(int i = 1; i <= min(a, b); i++)
    {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }
    return hcf;
}

// Way 02 - a bit more efficient
int gcd_rev(int a, int b)
{
    int hcf = 1;
    for(int i = min(a, b); i >= 1; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);

    int b;
    printf("Enter second number: ");
    scanf("%d", &b);

    int hcf;

    hcf = gcd(a, b);
    printf("The HCF/GCD of %d and %d is: %d\n", a, b, hcf);

    hcf = gcd_rev(a, b);
    printf("The HCF/GCD of %d and %d is: %d\n", a, b, hcf);
    return 0;
}
