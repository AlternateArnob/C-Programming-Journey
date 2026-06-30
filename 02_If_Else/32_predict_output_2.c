// Predict the output

#include <stdio.h>

int main()
{
    int a = 300, b, c;
    if(a >= 400)
        b = 300;
        c = 200;
        printf("\n%d %d", b, c);
    return 0;
}

// Output:
//
// garbage_value 200

// Without braces, only the first statement is controlled by if.
