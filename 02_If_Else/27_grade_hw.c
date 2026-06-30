// HW: Take input percentage of a student and
// print the Grade according to marks:
// 1) 91-100 Excellent
// 2) 81-90 Very Good
// 3) 71-80 Good
// 4) 61-70 Can do better
// 5) 51-60 Average
// 6) 41-50 Below Average
// 7) <=40 Fail

#include <stdio.h>

int main()
{
    int n;
    printf("Enter percentage: ");
    scanf("%d", &n);

    // Using else-if ladder
    if(n > 90)
    {
        printf("Excellent\n");
    }
    else if(n > 80)
    {
        printf("Very Good\n");
    }
    else if(n > 70)
    {
        printf("Good\n");
    }
    else if(n > 60)
    {
        printf("Can do better\n");
    }
    else if(n > 50)
    {
        printf("Average\n");
    }
    else if(n > 40)
    {
        printf("Below Average\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}
