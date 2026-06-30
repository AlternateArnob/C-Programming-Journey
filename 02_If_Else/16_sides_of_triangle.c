// Ques: Take 3 numbers input and tell if they
// can be the sides of a triangle.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st side: ");
    scanf("%d", &a);

    printf("Enter 2nd side: ");
    scanf("%d", &b);

    printf("Enter 3rd side: ");
    scanf("%d", &c);

    // Sum of any two sides must be greater than the third side.
    if((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
    return 0;
}
