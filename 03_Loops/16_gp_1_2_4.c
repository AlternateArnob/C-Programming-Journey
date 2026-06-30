// Ques: Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 1;
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }
    return 0;
}

// GP Formula: a(n) = ar^(n - 1)
// We will not use the formula way in GP
// We will do it using extra variable
