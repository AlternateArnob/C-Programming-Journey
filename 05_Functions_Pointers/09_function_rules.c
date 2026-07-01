#include <stdio.h>

void greet1()
{
    printf("Function 1\n");
    return;
}

void greet2()
{
    printf("Function 2\n");
    return;
}

int main()
{
    greet1();
    greet2();
    return 0;
}

// Rules:
// 1. A C program has exactly one main() function.
// 2. Program execution always starts from main().
// 3. A program can have any number of user-defined functions.
