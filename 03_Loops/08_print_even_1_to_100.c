// Ques: Print all the even numbers from 1 to 100

#include <stdio.h>

int main()
{
    // Way 1: Check every number
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
            printf("%d ", i);
    }

    printf("\n\n");

    // Way 2: Directly generate even numbers
    for(int i = 2; i <= 100; i = i + 2)
    {
        printf("%d ", i);
    }
    return 0;
}
