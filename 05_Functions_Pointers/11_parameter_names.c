// Proving that function parameters and main() variables are different.

#include <stdio.h>

// Parameter names can be anything.
// In the previous file, we saw that function parameters are different
// from the variables in main().
// This time, we use x and y as the function parameters to prove this.

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);

    int b;
    printf("Enter second number: ");
    scanf("%d", &b);

    // Passing the values of a and b as arguments to add().
    int sum = add(a, b);

    printf("Sum = %d\n", sum);
    return 0;
}
