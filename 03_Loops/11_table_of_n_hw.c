// HW: Print the table of ‘n’. Here ‘n’ is a integer
// which user will input.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Way 1:
    for(int i = n; i <= n * 10; i = i + n)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    // Way 2:
    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", i * n);
    }
    return 0;
}
