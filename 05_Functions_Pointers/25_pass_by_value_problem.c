// Pass by value and its problem

#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    // This does not swap the variables in main().
    swap(a, b);

    // Swapping directly inside main() works.
    // int temp = a;
    // a = b;
    // b = temp;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}

// Why didn't the variables swap?
// C uses pass by value.
// So swap() receives copies of a and b, not the original variables.
// The a and b inside swap() are local variables of that function.
// Swapping those local variables does not affect the variables in main().

// How can we solve this?
// Instead of passing the values,
// we pass the addresses of the variables to swap().
// This allows swap() to modify the original variables.
// This technique is commonly called pass by reference using pointers.
