// Ques: Print the given pattern

/*
    * * * * *
      * * * *
        * * *
          * *
            *
*/

// Right Aligned Inverted Star Triangle Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int nsp = 0;
    int nst = n;

    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= nsp; k++) // spaces
        {
            printf("  ");
        }
        for(int j = 1; j <= nst; j++) // stars
        {
            printf("* ");
        }

        nsp++;
        nst--;

        printf("\n");
    }
    return 0;
}
