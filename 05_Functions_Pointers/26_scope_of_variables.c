// Scope of variables
// In simple words, scope is the limit of a variable.

#include <stdio.h>

void fun()
{
    // The scope of x is limited to fun().
    int x = 20;
    printf("Inside fun() x = %d\n", x);
    return;
}

int main()
{
    // The scope of x is limited to main().
    int x = 10;
    printf("Inside main() x = %d\n", x);

    fun();

    printf("Inside main() x = %d\n", x);

    printf("\n");

    if(x > 5)
    {
        // The scope of y is limited to this if block.
        int y = 100;
        printf("Inside if block y = %d\n", y);
    }

    for(int i = 1; i <= 3; i++)
    {
        // The scope of i is limited to this for loop.
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

// Scope:
// A variable declared inside a block cannot be accessed outside that block.

// Formal definition:
// The scope of a variable is the region of the program
// where the variable can be accessed.

// Examples:
// x inside fun() cannot be used in main().
// y cannot be used outside the if block.
// i cannot be used outside the for loop.
