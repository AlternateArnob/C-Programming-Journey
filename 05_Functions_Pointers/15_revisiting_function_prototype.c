// Revisiting function prototypes.

#include <stdio.h>

int main()
{
    void fun(); // Local function prototype

    fun();
    return 0;
}

void fun() // Function definition
{
    printf("Hello World\n");
    return;
}

// The function definition can be placed anywhere in the program,
// as long as its prototype appears before the function call.
