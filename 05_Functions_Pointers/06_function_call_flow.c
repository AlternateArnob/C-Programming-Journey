// Execution flow of nested function calls.
// main() -> bangladesh() -> australia() -> england()

#include <stdio.h>

void england()
{
    printf("You are in England\n");      // 6
    return; // Return to australia()     // 7
}

void australia()
{
    printf("You are in Australia\n");     // 4
    england(); // Calling england         // 5
    return; // Return to bangladesh()     // 8
}

void bangladesh()
{
    printf("You are in Bangladesh\n");    // 2
    australia(); // Calling australia     // 3
    return; // Return to main()           // 9
}

// Program starts here
int main()
{
    bangladesh(); // Calling bangladesh   // 1
    return 0; // End of program           // 10
}

// Note:
// Is there any rule for the order of function definitions?
// Here, every called function is defined above its caller.
// See the next file to learn why.
