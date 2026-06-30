// Ques: Take 3 positive integers input and print
// the greatest of them. (all 3 are distinct) (using nested if-else)

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("Enter 3rd number: ");
    scanf("%d", &c);

    if(a > b) // b is out of race
    {
        if(a > c) // c is out of race
            printf("%d is the greatest\n", a);
        else  // a < c -> b < a < c
            printf("%d is the greatest\n", c);
    }
    else // b > a
    {
        if(b > c) // c is out of race
            printf("%d is the greatest\n", b);
        else // c > b -> a < b < c
            printf("%d is the greatest\n", c);
    }
    return 0;
}
