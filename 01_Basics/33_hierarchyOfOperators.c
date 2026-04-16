/**
 *  Author: AlternateArnob
 *  Created: 2026-04-16 15:07
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    // Follows = [B O DM AS]

    // Remember this ? 
    float x = 3/4; 
    printf("%f\n", x); // predict output ? 
    x = 3.0/4; 
    printf("%f\n", x); // correct now


    // computer calculates from left to right in same precision
    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8; 
    printf("%d\n", i); 
    return 0;
}