// Ques: Take integer as input and print half of the number.

#include <stdio.h>

int main()
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    // Using 2.0 to perform floating-point division
    printf("Half of the number is: %.2f\n", x / 2.0);
    return 0;
}
