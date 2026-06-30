// Ques: Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three
// points fall on one straight line.

#include <stdio.h>

int main()
{
    double x1, y1;
    printf("Enter first point: ");
    scanf("%lf %lf", &x1, &y1);

    double x2, y2;
    printf("Enter second point: ");
    scanf("%lf %lf", &x2, &y2);

    double x3, y3;
    printf("Enter third point: ");
    scanf("%lf %lf", &x3, &y3);

    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);

    if(m1 == m2)
        printf("The 3 points fall on a straight line\n");
    else
        printf("The 3 points do not fall on a straight line\n");
    return 0;
}

/*
    Input:
    1 2
    2 4
    3 6
*/

// Output:
// The 3 points fall on a straight line
