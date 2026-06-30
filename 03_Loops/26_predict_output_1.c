// Predict the output

#include <stdio.h>

int main()
{
    int j; // garbage value

    while(j <= 10)
    {
        printf ( "\n%d", j ) ;
        j = j + 1 ;
    }
    return 0;
}

// Answer:
// j is not initialized.
// It contains a garbage value.
// Therefore, the loop execution depends on that random value.
// Output cannot be predicted.
