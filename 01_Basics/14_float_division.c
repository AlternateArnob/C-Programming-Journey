// Basics: 
    // int / int = int
    // float / int = float
    // int / float = float

// 👉 Type of operands decides the result — NOT the variable

#include <stdio.h>

int main()
{
    float x = 5; printf("%f\n", x); // 5.0000 
    float y = 2; printf("%f\n", y); // 2.0000

    printf("%d\n",5/2); // 2
    printf("%f\n",5/2); // ❗ undefined behavior (int given to %f)
    // treating it like int.(int/int=int).But, 
    printf("%f\n", 5.0/2); // 2.5000
    printf("%f\n",x / y); // 2.5000


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

    // ------------------------------------------------------
    // Pro tip: 2 solutions for error handeling:
    // 1. Make one operand decimal like 5.0; 
    // 2. Use typecasting; 
    printf("\n%f", 5.0/2); // 2.500000
    printf("\n%f", (float)5/2); // 2.500000
    float r = (float)7/2; 
    printf("\n%f", r); // 3.500000
    return 0; 
}