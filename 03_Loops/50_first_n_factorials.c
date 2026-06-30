// Ques: Print the factorials of first ‘n’ numbers

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;

        printf("%d! = %d\n", i, fact); // Just added this in the previous factorial code
    }

    // printf("%d! = %d\n", n, fact); // This line is no longer needed
    return 0;
}
