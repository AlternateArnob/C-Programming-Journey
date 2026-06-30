#include <stdio.h>

int main()
{
    int x = 5;
    int y = 2;

    printf("%d\n", x+y); // 7

    printf("%d\n", x-y); // 3

    printf("%d\n", x*y); // 10

    printf("%d", x/y); // Not 2.5! Why 2!?

    // Both x and y are integers.
    // Integer division keeps only the quotient and discards the remainder.
    // This is similar to the GIF (Greatest Integer Function).
    // GIF -> You can think of this as taking the quotient and ignoring the remainder.
    // Details (in depth) in the next file.
    return 0;
}

// Output:
// 7
// 3
// 10
// 2

// How this division happened:
// 2 ) 5 ( 2 -> quotient
//     4
//   ------
//     1 -> remainder (ignored)
