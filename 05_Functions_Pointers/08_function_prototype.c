#include <stdio.h>

void greet(); // Function prototype

// It tells the compiler that greet() exists.
// Its definition will appear later.

int main()
{
    greet(); // Valid because the compiler has already seen the prototype.
    return 0;
}

// Function definition
void greet()
{
    printf("Good Morning!\n");
    return;
}

// Function Prototype:
// A function prototype is a declaration of a function.

// It tells the compiler:
// 1. Function name
// 2. Return type
// 3. Parameter list

// The actual function definition can be written anywhere later in the file.

// Syntax:
// return_type function_name(parameter_list);
