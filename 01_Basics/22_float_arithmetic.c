#include <stdio.h>

int main()
{
    float x = 5;
    float y = 2;

    printf("%f\n", x + y); // 7.000000

    printf("%f\n", x - y); // 3.000000

    printf("%f\n", x * y); // 10.000000

    printf("%f\n", x / y); // 2.500000

    // But...

    printf("\n%f\n", 5 / 2); // 0.000000 // undefined behavior
    // Wrong! %f expects a double, but 5/2 gives an int.
    // This causes undefined behavior.

    // Use %d instead:
    printf("%d\n", 5 / 2);

    // The same idea applies when assigning the result to a float variable:
    // 5/2 is evaluated first as integer division (result = 2)
    // then 2 is converted to 2.000000 when stored in a float.
    return 0;
}

// Output:
// 7.000000
// 3.000000
// 10.000000
// 2.500000
//
// undefined behavior
// 2
