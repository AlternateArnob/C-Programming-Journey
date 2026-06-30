// Break -> It is used to terminate a loop.

// Ques: WAP to check if a number is composite or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n-1; i++)
    {
        if(n % i == 0)
        {
            printf("%d is a composite number\n", n);
            break;
        }
    }
    return 0;
}

// Composite check:
// 12 -> 1, 2, 3, 4, 6, 12 (6 factors)
//
// We only check the numbers from 2 to n-1.
// For 12, the possible factors in this range are: 2, 3, 4 and 6.
//
// Without break, the program would find all these factors.
// Therefore, it would print "12 is a composite number" 4 times.
// But, as soon as we find the first factor (2),
// we already know that 12 is composite.
//
// Therefore, there is no need to continue checking.
// We use break to terminate the loop immediately.
//
// This program can identify composite numbers,
// but it cannot determine whether a number is prime.
// See the next program.
