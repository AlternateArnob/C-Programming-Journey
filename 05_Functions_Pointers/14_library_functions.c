// Standard library functions.

#include <stdio.h>
#include <math.h> // Contains mathematical library functions.

int main()
{
    printf("Hello World\n"); // Standard library function

    int x;
    printf("Enter a number: ");
    scanf("%d", &x); // Standard library function
    printf("The number you entered is %d\n", x);

    double r = 49;
    double root = sqrt(r); // Standard library function
    printf("Square root of %.0lf is %.2lf\n", r, root);

    double a = 2;
    double b = 5;
    double power = pow(a, b); // Standard library function
    printf("%.0lf to the power %.0lf is %.2lf\n", a, b, power);
    return 0;
}

// sqrt() and pow() are standard library functions declared in <math.h>.
// They both return values of type double.
