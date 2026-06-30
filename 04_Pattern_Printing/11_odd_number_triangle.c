// Ques: Print the given pattern

/*
    1
    1 3
    1 3 5
    1 3 5 7
*/

// Odd Number Triangle Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Demonstration of a common mistake:

    // a should be declared inside the outer loop.
    // Otherwise it will not reset to 1 for every row.

    int a = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }

    printf("\n");

    // Way 01 - With extra variable (Correct approach)
    // (Teacher emphasized this approach)
    for(int i = 1; i <= n; i++)
    {
        int a = 1;
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }

    printf("\n");

    // Way 02 - Without extra variable
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2 * i - 1; j += 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
