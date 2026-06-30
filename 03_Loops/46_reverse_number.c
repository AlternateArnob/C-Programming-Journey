// Ques: WAP to print reverse of a given
// number and store it.

#include <stdio.h>

int main()
{
    int n, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = n; // Save the original number because n will be modified

    // Way 01
    int r = 0;
    while(n != 0)
    {
        r = r * 10; // Correct order
        r = r + (n % 10);
        // r = r * 10; // Wrong order
        n = n / 10;
    }
    printf("The reverse of the given number is %d\n", r);


    // Way 02
    n = x; // Restore the original number
    r = 0;
    while(n != 0)
    {
        int last_digit = n % 10;
        r = r * 10 + last_digit;
        n = n / 10;
    }
    printf("The reverse of the given number is %d\n", r);
    return 0;
}
