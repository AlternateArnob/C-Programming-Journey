// Ques: Take float input and print the fractional part
// of the real number(for positive numbers).

#include <stdio.h>

int main()
{
    float x;
    printf("Enter a floating point number: "); // 5.7
    scanf("%f", &x);

    int y = (int)x; // Extract integer part using typecasting
    // For positive numbers, y works like the greatest integer function [x].
    printf("Integer part is: %d\n", y); // 5

    float z = x - y; // x - [x]
    printf("Fractional part is: %f\n", z); // 0.700000
    return 0;
}
