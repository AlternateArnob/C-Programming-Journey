#include <stdio.h>

int main()
{
    int x = 5; 
    int y = 2; 
    int z = x + y; 
    printf("%d\n", x); // predict output? 

    z = x / y; 
    printf("%d\n", z); // output?
    // is it like 5/2 = 2.5 but z is int so computer give him 2?
    // no. computer makes int/int=int; it never made 2.5; 
    // then how to avoid this? -> next file; 
    return 0; 
}