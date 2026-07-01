// Learning return types using a function that adds two numbers.

#include <stdio.h>

// int is the return type because this function returns an integer.
// The a and b here are different from the a and b in main().
// They are local to the add() function.

int add(int a, int b) // a and b are parameters.
{
    return a + b; // Return the sum of a and b.
}

int main()
{
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);

    int b;
    printf("Enter second number: ");
    scanf("%d", &b);

    // int sum = a + b; // Doing it directly without a function.

    // Passing the values of a and b as arguments to add().
    int sum = add(a, b);

    printf("Sum = %d", sum);
    return 0;
}

// void -> returns nothing.
// int  -> returns an integer.
// char -> returns a character.

// Proof in the next file:
// The a and b in add() are different from the a and b in main().
