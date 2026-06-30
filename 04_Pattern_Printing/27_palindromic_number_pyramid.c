// Ques: Print the given pattern

/*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
*/

// Palindromic Number Pyramid Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Way 01 - Center row logic (Made by me)
    for(int i = 1; i <= n; i++)
    {
        int a = 1; // Current number to print
        for(int j = 1; j <= n - i; j++) // spaces
        {
            printf("  ");
        }
        for(int k = 1; k <= 2 * i - 1; k++) // numbers
        {
            printf("%d ", a);

            // Before center -> increase
            if(k < i) // k == i is the center position
                a++;

            // After center -> decrease
            else
                a--;
        }
        printf("\n");
    }

    printf("\n");

    // Way 02 - Two partition logic
    // Print the pyramid as two triangle parts (Made by me)
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++) // spaces
        {
            printf("  ");
        }
        for(int k = 1; k <= i; k++) // number triangle
        {
            printf("%d ", k);
        }
        for(int l = i - 1; l >= 1; l--) // decreasing triangle
        {
            printf("%d ", l);
        }
        printf("\n");
    }

    printf("\n");

    // Way 03 - Two partition logic
    // Teacher's approach (using 2 extra variables -> nsp and a)
    int nsp = n - 1;
    for(int i = 1; i <= n; i++)
    {
        int a = i - 1; // Starting value for the decreasing part
        for(int j = 1; j <= nsp; j++) // spaces
        {
            printf("  ");
        }
        nsp--;
        for(int k = 1; k <= i; k++) // number triangle
        {
            printf("%d ", k);
        }
        for(int l = 1; l <= i - 1; l++) // decreasing triangle
        {
            printf("%d ", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}
