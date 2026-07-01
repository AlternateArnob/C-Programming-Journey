// Using function prototypes with nested function calls.

#include <stdio.h>

void england();     // Global prototype

int main()
{
    void bangladesh();  // Local prototype

    bangladesh();
    return 0;
}

void bangladesh()
{
    void australia();   // Local prototype

    printf("You are in Bangladesh\n");
    australia();
    return;
}

void australia()
{
    printf("You are in Australia\n");
    england();
    return;
}

void england()
{
    printf("You are in England\n");
    return;
}

// Since the compiler has already seen the function prototypes,
// the function definitions can appear in any order.

// Global prototypes are visible throughout the file.
// Local prototypes are visible only inside the block where they are declared.
