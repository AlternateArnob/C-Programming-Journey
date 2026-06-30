// Ques: Print the given pattern

/*
    * * * * * * *
    * * *   * * *
    * *       * *
    *           *
*/

// Hollow Inverted Star Pyramid Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int nst = n - 1;
    int nsp = 1;

    for(int i = 1; i <= 2 * n - 1; i++) // first line of stars
        printf("* ");
    printf("\n");

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= nst; j++) // stars
        {
            printf("* ");
        }
        for(int k = 1; k <= nsp; k++) // spaces
        {
            printf("  ");
        }
        for(int l = 1; l <= nst; l++) // stars
        {
            printf("* ");
        }

        nsp += 2;
        nst--;

        printf("\n");
    }
    return 0;
}

// My implementation takes n as the total height of the pattern.
// Teacher's version interprets n differently and prints one fewer hollow rows.
