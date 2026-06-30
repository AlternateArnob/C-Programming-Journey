// Ques: Take input percentage of a student and
// print the Grade according to marks.
//
// Grade system:
// >80  -> Grade A
// >60  -> Grade B
// >40  -> Grade C
// <=40 -> Grade F

#include <stdio.h>

int main()
{
    int n;
    printf("Enter percentage: ");
    scanf("%d", &n);

    // Using else-if ladder
    if(n > 80)
    {
        printf("Grade A\n");
    }
    else if(n > 60)
    {
        printf("Grade B\n");
    }
    else if(n > 40)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade F\n");
    }
    return 0;
}
