// Ques: Take positive integer input and tell if it
// is a three digit number or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // A three-digit positive number ranges from 100 to 999.
    if(n > 99 && n < 1000)
    {
        printf("The number is a three digit number\n");
    }
    else
    {
        printf("The number is not a three digit number\n");
    }
    return 0;
}
