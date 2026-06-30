#include <stdio.h>

int main()
{
    printf("Hello Arnob\n"); // Escape sequence at the end.
    printf("Hello\n Hasan"); // Space will also be printed before Hasan.
    printf("\nHello Sabit"); // Escape sequence at the beginning.
    return 0;
}

// Output:
// Hello Arnob
// Hello
//  Hasan
// Hello Sabit

// Wherever we need to move to a new line, use the escape sequence \n.

// Do we need two printf functions to print 2 lines?
// Nope, see the next file.
