// Ques: Swap 2 numbers without using an extra variable

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    // Swapping without using an extra variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}
