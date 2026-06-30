// Curly braces {} are optional when if or else has only one statement.
// They are required when there are multiple statements.

#include <stdio.h>

int main()
{
    int n = 10;

    if(n > 5)
    {
        printf("n is greater than 5\n");
    }
    else
    {
        printf("n is not greater than 5\n");
    }


    // Without curly braces.
    if(n > 5)
        printf("n is greater than 5\n");
    else
        printf("n is not greater than 5\n");


    // Multiple lines: braces mandatory.
    if(n > 5)
    {
        printf("n is greater than 5\n");
        printf("n is an integer\n");
    }
    else
        printf("n is not greater than 5\n");
    return 0;
}
