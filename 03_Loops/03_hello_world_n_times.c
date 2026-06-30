// Ques: Print hello world ‘n’ times. Take ‘n’ as
// input from user

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // for(int i = 1; i <= n; i = i + 1) // Both work the same.

    for(int i = 1; i <= n; i++)
    {
        printf("Hello World\n");
    }
    return 0;
}
