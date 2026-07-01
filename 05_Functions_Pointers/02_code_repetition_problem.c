#include <stdio.h>

// This is the main function.
int main()
{
    printf("Hello World\n\n"); // Printing once.

    for(int i = 1; i <= 5; i++) // Printing multiple times.
    {
        printf("Hello Mars\n");
    }
    printf("\n");

    // We can use a for loop to perform repetitive tasks.
    // However, all repetitions happen at the same place.
    // What if we need the same block of code in different parts of the program?

    // Example: Repeating the same block of code in different parts of the program.

    // code
    // code
    // code
    printf("Good Morning\n");
    printf("How are you?\n");
    printf("Bye\n");

    // code
    // code
    // code
    // code
    // code
    printf("Good Morning\n");
    printf("How are you?\n");
    printf("Bye\n");

    // code
    // code
    // code
    // code
    printf("Good Morning\n");
    printf("How are you?\n");
    printf("Bye\n");

    // code
    // code
    // code

    // The same block of code is repeated again and again.
    // Should we keep copying and pasting it?
    // No. The code becomes difficult to read and maintain.
    // This is where functions become useful.
    // See the next file to learn how functions solve this problem.
    return 0;
}
