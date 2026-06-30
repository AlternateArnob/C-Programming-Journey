// Ques: Print the given pattern

/*
    *
    * *
    * * *
    * * * *
*/

// Star Triangle Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop -> number of rows -> i
    for(int i = 1; i <= n; i++)
    {
        // Inner loop -> stars printed in each row -> j
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}
