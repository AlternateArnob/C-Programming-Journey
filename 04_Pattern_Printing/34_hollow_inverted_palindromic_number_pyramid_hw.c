// HW: Print the given pattern

/*
    1 2 3 4 3 2 1
    1 2 3   3 2 1
    1 2       2 1
    1           1
*/

// Hollow Inverted Palindromic Number Pyramid Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int nst = n - 1;
    int nsp = 1;

    int a = 1;

    for(int i = 1; i <= 2 * n - 1; i++) // first line of numbers
    {
        if(i < n)
        {
            printf("%d ", a);
            a++;
        }
        else
        {
            printf("%d ", a);
            a--;
        }
    }
    printf("\n");

    for(int i = 1; i < n; i++)
    {
        a = 1;

        for(int j = 1; j <= nst; j++) // left number block
        {
            printf("%d ", a);
            a++;
        }
        for(int k = 1; k <= nsp; k++) // middle spaces
        {
            printf("  ");
        }
        for(int l = 1; l <= nst; l++) // right number block
        {
            --a;
            printf("%d ", a);
        }

        nsp += 2;
        nst--;

        printf("\n");
    }
    return 0;
}
