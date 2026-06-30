// Ques: WAP to count digits of a given number.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;

    if(n == 0) // Edge case
    {
        count = 1;
    }

    // While(n < 0) // Only works for positive numbers, negative numbers will skip the loop.

    while(n != 0) // This can handle both positive and negative numbers
    {
        count++;
        n = n / 10;
    }
    printf("The number of digits are %d", count);
    return 0;
}
