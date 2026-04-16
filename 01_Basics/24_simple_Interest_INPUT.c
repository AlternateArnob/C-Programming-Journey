/**
 *  Author: AlternateArnob
 *  Created: 2026-04-16 12:08
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    float principle,rate,time,si; 
    printf("Enter Principle : "); 
    scanf("%f", &principle); 
    printf("Enter Rate : ");
    scanf("%f", &rate);
    printf("Enter Time : ");
    scanf("%f", &time);
    si = (principle * rate * time) / 100; 
    printf("Your simple interest is : %f", si); 
    return 0;
}