#include <stdio.h>

void greet()
{
    printf("Good Morning\n");
    printf("How are you?\n");
    printf("Bye\n");
    printf("\n");
    return;
}

int main()
{
    // A function call is just another statement.
    // So, we can also call it inside a loop.

    printf("Calling using a loop:\n\n");

    for(int i = 1; i <= 5; i++)
    {
        greet();
    }
    return 0;
}

// Since a function call is a statement, it can be placed
// wherever a normal statement is allowed.
