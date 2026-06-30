// The Real Thing:

// if(condition) ✅
//     statement;

// if(expression) ✅
//     statement;

// condition can be any expression that evaluates to:
// non-zero -> true
// zero     -> false

#include <stdio.h>

int main()
{
    int a;

    if(3 + 2 % 5) // 5 -> true
        printf("This works\n");

    if(a = 10) // assignment, expression value is 10 -> true
        printf("Even this works\n");

    if(-5) // non-zero -> true
        printf("Surprisingly even this works\n\n");


    // In C:
    // 0      -> false
    // non-zero  -> true

    if(0)
        printf("This will not be printed\n");

    if(a = 0) // assignment, expression value is 0 -> false
        printf("This will also not be printed\n");

    if(3 + 2 % 5 - 5) // 0 -> false
        printf("Even this will also not be printed\n\n");


    // One last experiment:

    if('a') // ASCII value 97 -> true
        printf("Surprise! This one also worked\n");

    char ch = 'A';

    if(ch) // ASCII value 65 -> true
        printf("Shocked! This one also worked\n");

    if(ch = '#') // assignment, ASCII value 35 -> true
        printf("Oh no! Even this one also worked\n");
    return 0;
}
