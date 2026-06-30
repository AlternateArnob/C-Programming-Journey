// HW: Print the given pattern

/*
    * * * *
    * * * *
    * * * *
    * * * *
*/

// Solid Square Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of stars in each side: ");
    scanf("%d", &n);

    // Outer loop -> number of rows -> i
    for(int i = 1; i <= n; i++)
    {
        // Inner loop -> number of stars in each row -> j
        for(int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}
