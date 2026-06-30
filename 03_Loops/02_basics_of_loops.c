#include <stdio.h>

int main()
{
    // Print Hello World 5 times without a loop:
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");

    printf("\n");


    // But can we do this 1000 times?
    // We follow the DRY principle.
    // DRY -> Don't Repeat Yourself.
    // This is where loops become useful.


    // Print Hello Mars 10 times using a for loop:
    for(int i = 1; i <= 10; i = i + 1)
    {
        printf("Hello Mars\n");
    }

    // Initialization: int i = 1
    // Condition: i <= 10
    // Update (Increment): i = i + 1 or i++

    // Note: i = i + 1 is the same as i++.
    return 0;
}

// Steps:
// 0. At first initialization happens (only once).
// 1. Check condition.
// 2. Go inside loop.
// 3. Update.
// Repeat 1, 2, 3 again and again until condition fails.
