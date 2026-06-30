// Concept:
    // int / int -> int
    // float / int -> float
    // int / float -> float

// Type of operands decides the result — NOT the variable

#include <stdio.h>

int main()
{
    float x = 5;
    float y = 2;

    float z = x / y;
    printf("z = %f\n", z); // 2.500000. All OK.

    // But but but,

    // Predict the output?
    float a = 5 / 2;
    printf("a = %f\n", a); // what!! 2.000000 !!! Why?
    // Both 5 and 2 are int. So int / int = int.

    float b = 5.0 / 2;
    printf("b = %f\n", b); // 2.500000

    float c = 5 / 2.0;
    printf("c = %f\n", c); // 2.500000

    // ------------------------------------------------------
    // Pro tip: Two ways to get floating-point division:
    // 1. Make one operand floating point value like 5.0;
    // 2. Use typecasting;

    printf("\n%f", 5.0/2); // 2.500000

    printf("\n%f", (float)5/2); // 2.500000
    // (float)5 converts 5 to 5.000000
    // So (float)5 / 2 becomes 5.000000 / 2
    // float / int = float division

    float r = (float)7/2;
    printf("\n%f", r); // 3.500000
    return 0;
}

// Output:
// z = 2.500000
// a = 2.000000
// b = 2.500000
// c = 2.500000
//
// 2.500000
// 2.500000
// 3.500000
