// Variable Naming rules

/*
    There are 4 rules of variable naming:
    1. Variables can start from an alphabet or underscore _ .
    2. Special characters except _ are not allowed.
    3. Some particular keywords are not allowed (32 keywords).
        see the list of keywords below.
    4. Commas or blanks are not allowed.
*/

#include <stdio.h>

int main()
{
    // ------------------------- Rule - 1: -------------------------
    float maths = 93; // allowed
    float _maths = 98; // allowed

    // cannot start with number
    float m1 = 3; // allowed
    // float 2m = 5; // not allowed
    float maths570marks = 78; // allowed

    // ------------------------- Rule - 2: -------------------------
    // special -> ! @ # $ % & * ( ) { } [ ] : ; " ' | \ / ~ ` + - = .
    // these are not allowed

    // ------------------------- Rule - 4: -------------------------
    // float ma,th = 98; // comma cannot be part of a variable name
    // In a declaration, ',' separates multiple variables.
    // This declares two variables: ma and th.

    // float ma th = 98; // space is not allowed.

    // ------------------------- Case sensitivity: -------------------------
    float a1 = 9;
    float A1 = 9; // these two are different variables
    // c language is case sensitive

    float math = 33;
    float math_ = 89; // different variables

    // ------------------------- Rule - 3: -------------------------

    // There are 32 keywords which are not allowed. Given below.

    // int float = 8; // keyword not allowed
    // int int = 9; // keyword not allowed
    // int auto = 10; // keyword not allowed

    // But,

    int Int = 5; // allowed. int != Int in C programming (case sensitive).
    return 0;
}

/*
    What is a good variable name?
    - Give your variable a good sensible name.
    This is called clean code.

    float r = 5; doesn't make sense. instead,
    float radius = 5; good name
*/

// There are 32 keywords which are not allowed. Given below:
// auto  double  int  break  extern  enum  unsigned  while
// case  sizeof  for  const  static  long  continue  float
// else  signed  do   short  switch  char  volatile  default
// goto  struct  if   union  return  void  register  typedef
