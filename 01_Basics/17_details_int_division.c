#include <stdio.h>

int main()
{
    int x = 5;
    int y = 2;

    int z = x + y;
    printf("%d\n", z); // predict output? -> 7

    z = x / y;
    printf("%d\n", z); // output? -> 2 !!
    return 0;
}

// Output:
// 7
// 2

// Is it like 5/2 = 2.5 but z is int so computer gives it 2?
// No, computer makes int/int=int. It never made 2.5
// It only keeps the quotient, ignores the remainder, and stores that in z.
// Then how to avoid this? -> Using float data type.
// See the next files.
