// Ques: Combination

#include <stdio.h>

int main()
{
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    int nfact = 1; // n!
    int rfact = 1; // r!
    int nrfact = 1; // n - r !

    for(int i = 2; i <= n; i++)
        nfact *= i;

    for(int i = 2; i <= r; i++)
        rfact *= i;

    for(int i = 2; i <= n - r; i++)
        nrfact *= i;

    int nCr = nfact / (rfact * nrfact);

    printf("nCr = %d\n", nCr);
    return 0;
}
