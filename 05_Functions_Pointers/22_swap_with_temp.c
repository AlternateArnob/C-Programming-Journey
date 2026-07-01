// Ques: Swap 2 numbers using an extra variable

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    // Swapping using an extra variable
    int temp = a;
    a = b;
    b = temp;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}
