// Predict the output

#include <stdio.h>

int main()
{
    int x = 3, y = 5;
    if(x == 3)
        printf("\n%d", x);
    else; // -> Don't miss this ';'
        printf("\n%d", y);
    return 0;
}

// Output:
//
// 3
// 5
