// Ques: Print the given pattern

/*
    * * * * *
    * * * * *
    * * * * *
*/

// Solid Rectangle Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int m;
    printf("Enter number of columns: ");
    scanf("%d", &m);

    // Outer loop -> number of rows -> i
    for(int i = 1; i <= n; i++)
    {
        // Inner loop -> number of stars in each row -> j
        for(int j = 1; j <= m; j++)
        {
            printf("* ");
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}
