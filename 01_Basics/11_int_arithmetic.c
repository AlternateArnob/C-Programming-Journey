#include <stdio.h>

int main()
{
    int x = 5; 
    int y = 2; 

    printf("%d", x+y); // 7
    printf("\n%dd", x-y); // 3
    printf("\n%d", x*y); // 10
    printf("\n%d", x/y); // not 2.5 ; why 2?  
    // because of %d; it if for int. taking greatest integer function.
    // details in next file.
}