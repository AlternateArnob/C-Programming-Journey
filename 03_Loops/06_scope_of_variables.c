#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i = i + 2)
    {
        printf("Hello World\n");
    }
    printf("\n");

    // Loop stops when i becomes 11 because condition i <= 10 becomes false.
    // Can we print i to see if it is really 11 or not?

    // printf("i = %d\n", i); // Error.

    // This happened because of scope of variables.
    // The power of i is only limited inside that for loop.
    // But, There is a workaround for this.


    int j; // j is declared outside the loop, so its scope is the main function.
    for(j = 1; j <= 10; j = j + 2)
    {
        printf("Hello Mars\n");
    }
    printf("j = %d\n", j);
    return 0;
}
