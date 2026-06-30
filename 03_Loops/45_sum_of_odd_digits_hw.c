// HW: WAP to print sum of all the odd digits of
// a given number.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;

    while(n != 0)
    {
        int last_digit = n % 10;

        if(last_digit % 2 != 0)
            sum = sum + last_digit;

        n = n / 10;
    }
    printf("The sum of odd digits is %d", sum);
    return 0;
}
