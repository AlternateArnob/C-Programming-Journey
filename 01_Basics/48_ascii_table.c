// Memorise:
// A -> 65  Z -> 90
// a -> 97  z -> 122
// 0 -> 48  9 -> 57

// Note:
// We are using loops here only to print the ASCII table quickly.
// Loops will be covered properly in a later lecture.
// For now, focus on understanding the ASCII values.

#include <stdio.h>

int main()
{
    // Lowercase letters: a-z
    for(char ch='a'; ch<='z'; ch++)
    {
        printf("%c -> %d\n", ch, ch);
    }

    printf("\n---------------\n\n");

    // Uppercase letters: A-Z
    for(char ch='A'; ch<='Z'; ch++)
    {
        printf("%c -> %d\n", ch, ch);
    }

    printf("\n---------------\n\n");

    // Digit characters: 0-9
    for(char ch='0'; ch<='9'; ch++)
    {
        printf("%c -> %d\n", ch, ch);
    }

    printf("\n---------------\n");

    // Common special characters and their ASCII values
    char ch;
    ch = '!';
    printf("\n%c -> %d\n", ch, ch);
    ch = '@';
    printf("%c -> %d\n", ch, ch);
    ch = '#';
    printf("%c -> %d\n", ch, ch);
    ch = '$';
    printf("%c -> %d\n", ch, ch);
    ch = '%';
    printf("%c -> %d\n", ch, ch);
    ch = '^';
    printf("%c -> %d\n", ch, ch);
    ch = '&';
    printf("%c -> %d\n", ch, ch);
    ch = '*';
    printf("%c -> %d\n", ch, ch);
    ch = '(';
    printf("%c -> %d\n", ch, ch);
    ch = ')';
    printf("%c -> %d\n", ch, ch);

    // The same special characters can also be generated
    // using their ASCII values directly.

    printf("\n---------------\n\n");

    // Special characters using their ASCII range (33-47)
    for(char ch = 33; ch <= 47; ch++)
    {
        printf("%c -> %d\n", ch, ch);
    }
    return 0;
}
