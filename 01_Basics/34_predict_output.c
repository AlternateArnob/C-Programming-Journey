/**
 *  Author: AlternateArnob
 *  Created: 2026-04-16 15:16
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    int i = 2, j = 3, k, l; 
    float a, b; 
    k = i / j * j; 
    l = j / j * i; 
    a = i / j * j; 
    b = j / j * i; 
    printf("%d %d %f %f\n", k, l, a, b); 
    // float gives 6 digits after decimal point

    // experiment
    float pi = 22.0 / 7; 
    printf("%f\n", pi); // 6 digits proof

    // so float is accurate up to 6 decimal digit
    return 0;
}