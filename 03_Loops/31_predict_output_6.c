// Predict the output

#include <stdio.h>

int main()
{
    // while('a' < 'b')
    // {
    //     printf("\nmalayalam is a palindrome");
    // }

    // Note:
    // If a loop contains only one statement,
    // curly braces {} are optional.

    while('a' < 'b')
        printf("\nmalayalam is a palindrome");
    return 0;
}

// Output:
//
// malayalam is a palindrome
// malayalam is a palindrome
// malayalam is a palindrome
// ...
// ...
//
// The loop runs forever because 'a' < 'b' is always true.
// (Infinite loop)
