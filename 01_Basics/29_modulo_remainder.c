/**
 *  Author: AlternateArnob
 *  Created: 2026-04-16 12:44
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    int a, b; // a > b
    printf("Enter Divident : "); 
    scanf("%d", &a); 
    printf("Enter Divisor : "); 
    scanf("%d", &b); 

    // int q = a / b; // Quotient
    // int r = a - b*q; 
    // printf("The remainder when %d is divided by %d is: %d", a, b, r); 

    int r = a % b; // remainder
    printf("The remainder when %d is divided by %d is: %d", a, b, r);
    return 0;
}