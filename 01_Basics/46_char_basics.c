// Datatypes:
// int stores integers -> format specifier %d
// float stores real numbers -> format specifier %f
// char stores characters -> format specifier %c

// Characters:
// All small letters -> 'a', 'b', . . . , 'z'
// All the capital letters -> 'A', 'B', . . . , 'Z'
// Digit characters -> '0', '1', '2', . . . , '9'
// Special characters -> ! @ # $ % & * ( ) { } [ ] : ; " ' | \ / ~ ` + - = .

#include <stdio.h>

int main()
{
    char ch = 'a';
    printf("%c\n", ch);

    ch = '#';
    printf("%c\n", ch);

    ch = '(';
    printf("%c\n", ch);
    return 0;
}

// Output:
// a
// #
// (
