// Predict the output
// Taking multiple inputs using a single scanf

#include <stdio.h>

int main()
{
    int p, q;
    printf("Enter values of p and q: ");
    scanf("%d %d", &p, &q);
    printf("p = %d q = %d", p, q);
    return 0;
}

// We can provide input in two ways:
// 30 40 -> using a space
/*
    30
    40
    using Enter
*/

// This is how we handle multiple inputs and outputs.
