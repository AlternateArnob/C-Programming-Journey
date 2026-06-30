// HW: Print the given pattern

/*
          A
        A B A
      A B C B A
    A B C D C B A
*/

// Palindromic Alphabet Pyramid Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Way 01 - Center row logic (Made by me)
    for(int i = 1; i <= n; i++)
    {
        int a = 1;
        for(int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%c ", a + 64);

            if(k < i)
                a++;
            else
                a--;
        }
        printf("\n");
    }

    printf("\n");

    // Way 02 - Two partition logic (Made by me)
    // Print the pyramid as two triangle parts
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("%c ", k + 64);
        }
        for(int l = i - 1; l >= 1; l--)
        {
            printf("%c ", l + 64);
        }
        printf("\n");
    }

    printf("\n");

    // Way 03 - Two partition logic
    // Teacher's approach (using 3 extra variables -> nsp, a and ch)
    int nsp = n - 1;
    for(int i = 1; i <= n; i++)
    {
        int a = i - 1;
        for(int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        nsp--;
        for(int k = 1; k <= i; k++)
        {
            char ch = (char)(k + 64);
            printf("%c ", ch);
        }
        for(int l = 1; l <= i - 1; l++)
        {
            char ch = (char)(a + 64);
            printf("%c ", ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}
