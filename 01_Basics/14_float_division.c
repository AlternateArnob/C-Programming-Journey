#include <stdio.h>

    // int / int = int
    // float / int = float
    // int / float = float

int main()
{
    float x = 5; printf("%f\n", x); // 5.0000 
    float y = 2; printf("%f\n", y); // 2.0000

    //printf("%f\n",5/2); // error -> %d
    // treating it like int.(int/int=int).But, 
    printf("%f\n",x/ y); // 2.5000


    float z = x / y; 
    printf("%f\n", z); // predict ouput?-> 2.5000

    // but but but 

    float a = 5 / 2; 
    printf("%f\n", a); // what?-> 2.0000?
    // both 5 and 2 are int. so int/int = int; 
    
    float b = 5.0 / 2; 
    printf("%f\n", b); //-> 2.5000 

    float c = 5 / 2.0; 
    printf("%f\n", c); //-> 2.5000
    return 0; 
}