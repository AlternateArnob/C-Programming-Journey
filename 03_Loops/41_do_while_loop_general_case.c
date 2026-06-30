// Do-while loop

// Do-while loop works similar to while loop.
// First executes the code,
// then checks the condition.

#include <stdio.h>

int main()
{

    // While loop:

    int i = 1;

    while(i < 10)
    {
        printf("%d. I am inside while loop\n", i);

        i++;
    }

    printf("\n");

    // Do-while loop:

    i = 1;

    do
    {
        printf("%d. I am inside do-while loop\n", i);

        i++;

    } while(i < 10);
    return 0;
}
