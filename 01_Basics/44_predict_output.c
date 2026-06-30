// Predict the output

#include <stdio.h>

int main()
{
    int i = 2, j = 3, k, l;
    float a, b;

    k = i / j * j;
    l = j / j * i;
    a = i / j * j;
    b = j / j * i;

    printf("%d %d %f %f\n", k, l, a, b);

    // Note: By default, %f prints 6 digits after the decimal point.

    // experiment:
    float pi = 22.0 / 7;
    printf("pi = %f\n", pi); // Proof that %f prints 6 digits after decimal by default.
    return 0;
}

// Output:
// 0 2 0.000000 2.000000
// pi = 3.142857
