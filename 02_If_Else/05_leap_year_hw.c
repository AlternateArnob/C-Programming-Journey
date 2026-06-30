// HW: Any year is input through the keyboard. Write
// a program to determine whether the year is a leap
// year or not. (Considering leap year occurs after
// every 4 years)

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);

    if(n % 4 == 0)
    {
        printf("%d is a leap year\n", n);
    }

    else
    {
        printf("%d is not a leap year\n", n);
    }
    return 0;
}
