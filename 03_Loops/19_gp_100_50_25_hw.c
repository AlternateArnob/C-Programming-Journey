// HW: Display this GP - 100,50,25,.. upto ‘n’ terms

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float a = 100;
    for(int i = 1; i <= n; i++)
    {
        printf("%.3f ", a);
        a = a / 2;
    }
    return 0;
}
