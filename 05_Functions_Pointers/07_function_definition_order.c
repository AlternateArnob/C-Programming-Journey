#include <stdio.h>

// Moved above to demonstrate the compiler error.
void bangladesh()
{
    printf("You are in Bangladesh\n");
    australia(); // Error: The compiler has not seen australia() yet.
    return;
}

void england()
{
    printf("You are in England\n");
    return;
}

void australia()
{
    printf("You are in Australia\n");
    england();
    return;
}

// void bangladesh() // Original position
// {
//     printf("You are in Bangladesh\n");
//     australia();
//     return;
// }

// Program starts here
int main()
{
    bangladesh(); // Calling bangladesh
    return 0;
}

// Why does this give an error?
// When the compiler reads bangladesh(), it has not yet seen
// the definition (or prototype) of australia().

// Rule:
// Before a function is called, the compiler must have already seen
// either its definition or its function prototype.

// How do we solve this?
// By using a function prototype.

// See the next file.
