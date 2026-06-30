// Ques: Take 3 positive integers input and print
// the greatest of them. (all 3 are distinct)

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

    if(a > b && a > c)
    {
        printf("%d is the greatest\n", a);
    }
    if(b > a && b > c)
    {
        printf("%d is the greatest\n", b);
    }
    if(c > a && c > b)
    {
        printf("%d is the greatest\n", c);
    }
    return 0;
}
