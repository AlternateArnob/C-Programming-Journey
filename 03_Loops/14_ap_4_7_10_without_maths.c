// Ques: Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Way 1: Without using extra variables
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i * 3 + 1);
    }

    printf("\n\n");

    // Way 2: Using extra variable
    int a = 4;
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a =  a + 3;
    }
    return 0;
}
