/**
 *  Author: AlternateArnob
 *  Created: 2026-04-16 12:15
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    int x = 5; 
    printf("%d", x); // 5
    printf("%d\n", &x); // address of x

    int y; 
    scanf("%d", &y); // & -> points at the address of y
    printf("The number you Entered is : %d\n",y); 

    int z; 
    scanf("%d", z); // segmentation fault
    printf("The number you Entered is : %d\n",z); 
    return 0;
}

// scanf("%d", &y); 
// give me and int and put it at the address of y. 