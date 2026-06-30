// HW: Take positive integer input and tell if it
// is divisible by both 5 and 3.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Both conditions must be true.
    if(n % 5 == 0 && n % 3 == 0)
    {
        printf("The number is divisible by both 5 and 3\n");
    }
    else
    {
        printf("The number is not divisible by both 5 and 3\n");
    }
    return 0;
}

// Note: if(n % 15 == 0) -> This condition also works here.
