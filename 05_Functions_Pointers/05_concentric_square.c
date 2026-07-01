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

int minimum(int a, int b)
{
    int min = a;

    if(a > b)
        min = b;
    return min;
}

int main()
{
    int n;
    printf("Enter the number of layers: ");
    scanf("%d", &n);

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

            // Find the minimum of a and b.

            // int min = 0;

            // if(a < b)
            //     min = a;
            // else
            //     min = b;


            // Using a function to calculate the minimum.
            // This avoids repeating the same logic
            // and makes the code shorter and more readable.

            int min = minimum(a, b);

            printf("%d ", n + 1 - min);
        }
        printf("\n");
    }
    return 0;
}

// Functions also reduce the chance of errors.
// If the same logic is written in multiple places,
// every copy must be updated whenever the logic changes.

// By moving the logic into a function,
// we only need to update it in one place.

// This follows the DRY principle.
// DRY = Don't Repeat Yourself.
