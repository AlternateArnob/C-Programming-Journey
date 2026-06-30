// Ques: WAP to print odd numbers from 1 to 100 using continue statement.

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        // Skip even numbers
        if(i % 2 == 0)
            continue; // Skip the current iteration

        printf("%d ", i);
    }
    return 0;
}
