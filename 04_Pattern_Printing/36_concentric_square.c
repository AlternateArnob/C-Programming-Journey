// Ques: Print the given pattern

/*
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
*/

// Concentric Square Pattern

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of layers: ");
    scanf("%d", &n);

    // Approach 01 - My approach
    for(int i = 1; i <= 2 * n - 1; i++)
    {
        for(int j= 1; j <= 2 * n - 1; j++)
        {
            int a, b;

            a = i > n ? 2 * n - i : i;
            b = j > n ? 2 * n - j : j;

            int min = a < b ? a : b; // min = min(a, b); // minimum of a and b

            printf("%d ", n + 1 - min);
        }
        printf("\n");
    }

    printf("\n");

    // Approach 02 - Teacher's approach
    for(int i = 1; i <= 2 * n - 1; i++)
    {
        for(int j= 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            if(i > n)
                a = 2 * n - i;

            int b = j;
            if(j > n)
                b = 2 * n - j;

            // a = i > n ? 2 * n - i : i;
            // b = j > n ? 2 * n - j : j;
            // The above thing is just this thing. I used ternary operator to make it short.

            int min = 0;
            if(a < b)
                min = a;
            else
                min = b;

            // int min = a < b ? a : b; // min = min(a, b); // minimum of a and b
            // The above thing is just this thing. I used ternary operator to make it short.

            printf("%d ", n + 1 - min);
        }
        printf("\n");
    }
    return 0;
}
