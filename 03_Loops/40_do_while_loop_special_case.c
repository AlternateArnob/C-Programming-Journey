// Do-while loop

// Do-while loop works similar to while loop.
// The only difference is:

// while loop:
// First checks the condition, then runs the code.

// do-while loop:
// First runs the code, then checks the condition.

// Because of this, do-while loop executes at least once.
// Whether the condition is true or false.

#include <stdio.h>

int main()
{
    // While loop:

    int i = 10;

    // while loop will not run
    while(i < 10) // Condition is false
    {
        printf("%d. I am inside while loop\n", i);

        i++;
    }


    // Do-while loop:

    i = 10;

    do
    {
        printf("%d. I am inside do-while loop\n", i);

        i++;

    } while(i < 10); // Condition is false, but it already ran once
    return 0;
}

// This happens because do-while loop executes the code first,
// then checks the condition.
