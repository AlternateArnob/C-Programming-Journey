// Ques: Take positive integer input and tell if it is even or odd.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0) // even
    {
        printf("%d is an even number\n", n);
    }

    else // odd
    {
        printf("%d is an odd number\n", n);
    }
    return 0;
}
