// Predict the output

#include <stdio.h>

int main()
{
    int i = 1;

    // while(i <= 10); // Don't miss the ';' here.
    // This is a common mistake while writing loops.

    while(i <= 10) // Correct version.
    {
        printf("\n%d", i);
        i++;
    }
    return 0;
}

// Output:
//
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
