// HW: Print the given pattern

/*
    A
    A B
    A B C
    A B C D
*/

// Alphabet Triangle Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%c ", j + 64);

            // printf("%c ", 'A' + j - 1); // This one also works
        }
        printf("\n");
    }
    return 0;
}
