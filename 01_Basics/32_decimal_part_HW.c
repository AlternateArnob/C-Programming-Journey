/**
 *  Author: AlternateArnob
 *  Created: 2026-04-16 15:03
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    float x; 
    printf("Enter a decimal number: "); 
    scanf("%f", &x); 
    int y = x; 
    printf("Decimal part of %f is : %f", x, x-y); 
    return 0;
}