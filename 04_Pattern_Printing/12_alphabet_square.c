// Ques: Print the given pattern

/*
    A B C D
    A B C D
    A B C D
    A B C D
*/

// Alphabet Square Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Way 01 - With extra variable
    for(int i = 1; i <= n; i++)
    {
        int a = 1;
        for(int j = 1; j <= n; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }

    // Way 02 - Without extra variable
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            printf("%c ", j + 64);

            // printf("%c ", 'A' + j - 1); // This one also works
        }
        printf("\n");
    }
    return 0;
}
