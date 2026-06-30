// Ques: Take positive integer input and tell if it
// is divisible by 5 and 3. (using nested if-else)

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 5 == 0)
    {
        if(n % 3 == 0)
        {
            printf("The number is divisible by both 5 and 3\n");
        }
        else
        {
            printf("The number is not divisible by both 5 and 3\n");
        }
    }
    else
    {
        printf("The number is not divisible by both 5 and 3\n");
    }
    return 0;
}
