// HW: Print the given pattern

/*
          * * * *
        * * * *
      * * * *
    * * * *
*/

// Rhombus Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++) // Print leading spaces
        {
            printf("  ");
        }
        for(int k = 1; k <= n; k++) // Print stars
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
