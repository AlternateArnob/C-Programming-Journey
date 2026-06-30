// HW: WAP to print the sum of given number
// and its reverse.

#include <stdio.h>

int main()
{
    int n, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = n; // Save the original number because n will be modified

    int r = 0;
    while(n != 0)
    {
        int last_digit = n % 10;
        r = r * 10 + last_digit;
        n = n / 10;
    }

    printf("The sum of the number and its reverse is %d\n", r + x);
    return 0;
}
