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

    // Without using else-if ladder
    // Else-if ladder is a cleaner way to write this nested structure.
    if(n > 80)
    {
        printf("Grade A\n");
    }
    else
    {
        if(n > 60)
        {
            printf("Grade B\n");
        }
        else
        {
            if(n > 40)
            {
                printf("Grade C\n");
            }
            else
            {
                printf("Grade F\n");
            }
        }
    }
    return 0;
}
