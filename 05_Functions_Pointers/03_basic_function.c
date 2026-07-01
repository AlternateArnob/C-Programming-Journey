#include <stdio.h>

// User-defined function
void greet()
{
    printf("Good Morning\n");
    printf("How are you?\n");
    printf("Bye\n");
    printf("\n");
    return; // Terminates the function.
}

// Main function
int main()
{
    greet(); // Function call
    greet(); // Function call
    greet(); // Function call
    return 0;
}

// A C program can have multiple functions.

// Every C program starts execution from the main() function.

// We can call a function as many times as we want.
// We can even put it inside a loop to call it repeatedly.
// We can also put a function call inside an if-else statement.
// See the next file to learn how to call a function using a loop.
