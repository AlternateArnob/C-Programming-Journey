// Printing 1 to 100 using while loop

#include <stdio.h>

int main()
{
    int i = 1;
    while(i <= 100)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}

// while loop is useful when we know the termination condition,
// but the number of iterations is not known beforehand.
