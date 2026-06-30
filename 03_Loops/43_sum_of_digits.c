// Ques: WAP to print sum of digits of a given number.

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
        sum = sum + last_digit;
        n = n / 10;
    }
    printf("The sum of digits is %d", sum);
    return 0;
}
