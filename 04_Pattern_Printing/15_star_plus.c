// Ques: Print the given pattern

/*
        *
        *
    * * * * *
        *
        *
*/

// Star Plus Pattern

#include <stdio.h>

int main()
{
    int n; // n should be odd
    printf("Enter number of rows (in odd): ");
    scanf("%d", &n);

    // Middle row = n / 2 + 1
    // Middle column = n / 2 + 1

    // Expected Pattern:
    int a = n / 2 + 1; // Middle row and column

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == a || j == a)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n");

    // Different pattern: Changing the condition creates a completely new pattern.
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == a && j == a) // made it && instead of ||
                printf("* ");
            else
                printf(". "); // added one '.' to visualize
        }
        printf("\n");
    }
    // A star in the center.
    return 0;
}
