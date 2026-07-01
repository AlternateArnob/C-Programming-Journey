// Ques: Pascal Triangle Optimised

/*
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int iCj = 1;
        for(int k = 1; k <= n - i - 1; k++)
        {
            printf(" ");
        }

        for(int j = 0; j <= i; j++)
        {
            printf("%d ", iCj);

            // Next value = current value × (i - j) / (j + 1)
            iCj = iCj * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
