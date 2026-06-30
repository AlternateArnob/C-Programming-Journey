// Predict the output

#include <stdio.h>

int main()
{
    int x = 10, y = 20;
    if(x == y); // -> Don't miss this ';'
        printf("\n%d %d", x, y);
    return 0;
}

// Output:
//
// 10 20
