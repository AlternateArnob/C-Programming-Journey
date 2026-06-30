// HW: WAP to print even numbers from 1 to 100 using continue statement.

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        // Skip odd numbers
        if(i % 2 != 0)
            continue; // Skip the current iteration

        printf("%d ", i);
    }
    return 0;
}
