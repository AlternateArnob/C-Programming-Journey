// Ques: Print the given pattern

/*
    1 2 3 4 5 6 7
    1 2 3   5 6 7
    1 2       6 7
    1           7
*/

// Hollow Inverted Number Pyramid Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int nst = n - 1;
    int nsp = 1;

    for(int i = 1; i <= 2 * n - 1; i++) // first line of numbers
        printf("%d ", i);
    printf("\n");

    int a;

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
            a++;
        }
        for(int l = 1; l <= nst; l++) // right number block
        {
            printf("%d ", a);
            a++;
        }

        nsp += 2;
        nst--;

        printf("\n");
    }
    return 0;
}
