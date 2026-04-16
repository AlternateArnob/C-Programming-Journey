#include <stdio.h>

int main()
{
    printf("Hello World\n"); 

    int x; // declaration
    x = 5; // initialization
    printf("x"); // what? Printing x only
    printf("\n"); 
    printf("%d", x); // printed value of x
    // %d is called format specifier for int

    printf("\n"); 
    x = 9; 
    printf("%d", x); // predict_output? 
    // This is called updation
 
    x = 200; 
    printf("\n%d", x); // output x = 200 
    return 0; 
}