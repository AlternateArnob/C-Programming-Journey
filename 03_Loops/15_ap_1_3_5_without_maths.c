// Ques: Display this AP - 1,3,5,7,9.. upto ‘n’ terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Way 1: Without using extra variables
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i * 2 - 1);
    }

    printf("\n\n");

    // Way 2: Using extra variable
    int a = 1;
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a =  a + 2;
    }
    return 0;
}
