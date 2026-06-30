// Integer vs Float operators in C

#include <stdio.h>

int main()
{
    float a = 5, b = 2;
    int c;

    // c = a % b; // error
    // Because: In C, the modulo operator % only works with integers.

    printf("Modulo works only with integers.\n");
    return 0;
}

// int -> +, -, *, /, %
// float -> +, -, *, /
