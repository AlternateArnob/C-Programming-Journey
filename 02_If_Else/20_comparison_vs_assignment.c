// Difference between assignment (=) and comparison (==)

// = is used to assign a value to a variable.
// == is used to compare two values.

#include <stdio.h>

int main()
{
    int a = 5; // Assignment operator: assigns 5 to a

    if(a == 5) // Comparison operator: checks whether a is equal to 5
    {
        printf("a is equal to 5\n");
    }
    else
    {
        printf("a is not equal to 5\n");
    }
    return 0;
}

// Comparison operators: (Conditions)
// 1. a == b  -> a is equal to b
// 2. a > b   -> a is greater than b
// 3. a < b   -> a is less than b
// 4. a >= b  -> a is greater than or equal to b
// 5. a <= b  -> a is less than or equal to b
