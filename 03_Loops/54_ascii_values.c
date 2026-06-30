// Ques: Write a program to print all the ASCII values
// and their equivalent characters of 26 alphabets
// using a while loop.

#include <stdio.h>

int main()
{
    char ch = 'A';
    while(ch <= 'Z')
    {
        printf("%c -> %d\n", ch, ch);

        ch++;
    }

    printf("\n\n");

    ch = 'a';
    while(ch <= 'z')
    {
        printf("%c -> %d\n", ch, ch);

        ch++;
    }
    return 0;
}
