// Ques: Print the given pattern

/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

// Number Square Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Basic idea: Print one row first
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    // Now repeat the same row using nested loops

    printf("\n\n");

    // Outer loop -> number of rows -> i
    for(int i = 1; i <= n; i++)
    {
        // Inner loop -> numbers printed in each row -> j
        for(int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}
