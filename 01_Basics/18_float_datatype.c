#include <stdio.h>

int main()
{
    float x = 3.1416;
    printf("%f\n", x); // %f for float

    // float = floating point number
    // or
    // float = real number

    float a = 5; // It can also store integers but in a different manner.
    printf("%f\n", a);  // wow!! 5.000000 -> 6 digits after the decimal point
    return 0;
}

// Output:
// 3.141600
// 5.000000

// Float can store real numbers. Int is a subset of real number.
// %f prints 6 digits by default.
