// Ques: Print the given pattern

/*
    *       *
      *   *
        *
      *   *
    *       *
*/

// Star Cross Pattern

#include <stdio.h>

int main()
{
    int n; // n should be odd
    printf("Enter number of stars is each diagonal (in odd): ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j || i + j == n + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
