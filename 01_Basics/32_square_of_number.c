// Taking input from the user and printing the square of the given number.

#include <stdio.h>

int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    int y = x * x;
    printf("Square of the given number is: %d", y);
    return 0;
}
