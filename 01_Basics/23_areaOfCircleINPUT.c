/**
 *  Author: AlternateArnob
 *  Created: 2026-04-16 11:33
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    float radius; 
    printf("Enter radius: "); 
    scanf("%f",&radius);
    float pi = 3.1415; 
    float area = pi * radius * radius; 
    printf("The area of cicle is: %f\n",area);
    return 0;
}