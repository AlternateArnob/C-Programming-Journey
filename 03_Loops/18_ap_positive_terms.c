// Ques: Display this AP - 100,97,94,..upto all
// terms which are positive.

#include <stdio.h>

int main()
{
    // Printing n terms
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 100;
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }

    printf("\n\n");

    // Way 1: Printing all the positive terms after calculating number of terms
    a = 100;
    // AP formula: an = a + (n - 1)d
    for(int i = 1; i <= 34; i++) // We got this number 34 from calculation
    {
        printf("%d ", a);
        a = a - 3;
    }

    printf("\n\n");

    // Way 2: Printing all the positive terms using condition
    a = 100;
    for(int i = 1; a > 0; i++) // Just look at the condition
    {
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}
