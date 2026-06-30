// Ques: Given a point (x, y), write a program to find
// out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include <stdio.h>

int main()
{
    double x, y;
    printf("Enter a point: ");
    scanf("%lf %lf", &x, &y);

    if(x == 0 && y == 0)
        printf("The point lies at the origin\n");
    else if(x == 0)
        printf("The point lies on y axis\n");
    else if(y == 0)
        printf("The point lies on x axis\n");
    else
        printf("The point does not lie on any axis\n");
    return 0;
}
