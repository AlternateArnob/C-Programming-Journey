// HW: Print the given pattern

/*
    A B C D E F G
    A B C   E F G
    A B       F G
    A           G
*/

// Hollow Inverted Alphabet Pyramid Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int nst = n - 1;
    int nsp = 1;

    for(int i = 1; i <= 2 * n - 1; i++) // first line of alphabets
        printf("%c ", i + 64);
    printf("\n");

    int a;

    for(int i = 1; i < n; i++)
    {
        a = 1;

        for(int j = 1; j <= nst; j++) // left alphabet block
        {
            printf("%c ", a + 64);
            a++;
        }
        for(int k = 1; k <= nsp; k++) // spaces
        {
            printf("  ");
            a++;
        }
        for(int l = 1; l <= nst; l++) // right alphabet block
        {
            printf("%c ", a + 64);
            a++;
        }

        nsp += 2;
        nst--;

        printf("\n");
    }
    return 0;
}
