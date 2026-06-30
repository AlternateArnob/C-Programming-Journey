// Ques: Print the sum of this series:
// 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Method - 01
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("The sum of the alternating series is %d\n", sum);


    // Method - 02
    if(n % 2 == 0)
        sum = -n / 2;
    else
        sum = -n / 2 + n;

    printf("The sum of the alternating series is %d\n", sum);
    return 0;
}
