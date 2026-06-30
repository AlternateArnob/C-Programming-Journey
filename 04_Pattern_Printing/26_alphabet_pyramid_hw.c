// HW: Print the given pattern

/*
          A
        A B C
      A B C D E
    A B C D E F G
*/

// Alphabet Pyramid Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Way 01 - Without using extra variables
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%c ", k + 64);
        }
        printf("\n");
    }

    printf("\n");

    // Way 02 - Using nst and nsp
    int nst = 1;
    int nsp = n - 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        for(int k = 1; k <= nst; k++)
        {
            printf("%c ", k + 64);
        }

        nst += 2;
        nsp--;

        printf("\n");
    }
    return 0;
}
