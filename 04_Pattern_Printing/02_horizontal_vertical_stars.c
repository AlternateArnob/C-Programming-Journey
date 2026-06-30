// Ques: Print the given pattern

/*
    i. * * * * *
    ii. *
        *
        *
        *
        *
*/

// Horizontal and Vertical Star Patterns

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of stars: ");
    scanf("%d", &n);

    // One loop is enough because only one dimension changes.

    // Horizontal line of stars
    for(int i = 1; i <= n; i++)
    {
        printf("* ");
    }

    printf("\n\n");

    // Vertical line of stars
    for(int i = 1; i <= n; i++)
    {
        printf("*\n");
    }
    return 0;
}
