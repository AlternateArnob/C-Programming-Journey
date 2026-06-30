// Ques: Print the factorial of a given number ‘n’.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = 1;

    for(int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("%d! = %d", n, fact);
    return 0;
}
