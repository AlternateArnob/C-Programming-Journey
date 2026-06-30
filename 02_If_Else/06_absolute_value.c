// Ques: Take integer input and print the
// absolute value of that integer

#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0) // if n is negative
    {
        n = n * (-1);

        // n = -n; // This one also works.
    }

    printf("The absolute value is: %d\n", n);
    return 0;
}
