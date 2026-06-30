// Ques: Take positive integer input and tell if it
// is divisible by 5 or 3.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // At least one condition must be true.
    if(n % 5 == 0 || n % 3 == 0)
    {
        printf("The number is divisible by 5 or 3\n");
    }
    else
    {
        printf("The number is not divisible by 5 or 3\n");
    }
    return 0;
}
