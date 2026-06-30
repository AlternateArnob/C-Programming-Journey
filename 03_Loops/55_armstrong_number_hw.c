// HW: Write a program to print out all Armstrong
// numbers between 1 and 500. If sum of cubes of
// each digit of the number is equal to the number
// itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 500; i++)
    {
        int sum = 0;
        int n = i;

        while(n) // Same as while(n != 0)
        {
            int ld = n % 10;
            sum = sum + (ld * ld * ld);
            n = n / 10;
        }

        if(sum == i)
            printf("%d is an Armstrong number\n", i);
    }
    return 0;
}
