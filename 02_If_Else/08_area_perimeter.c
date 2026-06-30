// Ques: Given the length and breadth of a rectangle,
// write a program to find whether the area of the
// rectangle is greater than its perimeter.

#include <stdio.h>

int main()
{
    int l;
    printf("Enter length: ");
    scanf("%d", &l);

    int b;
    printf("Enter breadth: ");
    scanf("%d", &b);

    int a = l * b;
    int p = 2 * (l + b);

    if(a > p)
    {
        printf("Area is greater than perimeter\n");
    }
    if(a < p)
    {
        printf("Perimeter is greater than area\n");
    }
    if(a == p)
    {
        printf("Area and perimeter are equal\n");
    }
    return 0;
}

// There is a better approach for this problem using else if statement
// We will learn it later.
