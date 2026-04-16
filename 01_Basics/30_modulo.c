/**
 *  Author: AlternateArnob
 *  Created: 2026-04-16 14:44
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    int a = 41; // a > b
    int b = 6; 
    int r = a % b; // normal remainder
    printf("r = %d\n", r); 


    int p = 2; // p < q
    int q = 6; 
    int r1 = p % q; // ans = p 
    printf("r1 = %d\n", r1); 

    int x = 21; // x < y && y = 0
    int y = 0; 
    int r2 = x % y; // what ? it is x (ans). 
    printf("r2 = %d\n", r2); 
    return 0;
}