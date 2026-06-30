// HW: Print the given pattern

/*
    1 2 3 4
    1 2 3
    1 2
    1
*/

// Number Triangle Inverted Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Way 01 - Without extra variable
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n");

    // Way 02 - With extra variable
    int a = n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= a; j++)
        {
            printf("%d ", j);
        }
        a--;
        printf("\n");
    }
    return 0;
}
