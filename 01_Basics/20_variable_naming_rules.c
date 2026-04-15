/*
    There are 4 rules of varibale naming:
    1. Variables can start from an alphabet or underscore _ . 
    2. Special characters except _ are not allowed. 
    3. Some perticular keywords are not allowed (32 keywords). 
        see the pdf to see all keywords. 
    4. Commas or blanks are not allowed. 

    What is a good varibale name ? 
    - Give your varibale a good senseable name. 
    This is called clean code. 

    float r = 5; doesn't make sense. insted, 
    float radius = 5; good name
*/

/**
 *  Author: AlternateArnob
 *  Created: 2026-04-15 16:35
 *  حَسْبُنَا اللَّهُ وَنِعْمَ الْوَكِيلُ
 **/
#include <stdio.h>

int main()
{
    float maths = 93; // allowed
    float _maths = 98; // allowed

    // cannot start with number
    float m1 = 3; // allowed
    // float 2m = 5; // not allowed
    float maths570all = 78; // allowed

    // special -> ! @ # $ % & * ( ) { } [ ] : ; " ' | \ / ~ ` + - = .
    // this are not allowed
    
    // float ma,th = 98; // comma not allowed
    // flaot ma th = 99; // blank not allowed 


    float a1 = 9; 
    float A1 = 9; // this 2 are different varibales
    // c language is case sensitive

    float math = 33;
    float math_ = 89; // different varibales 
    return 0;
}