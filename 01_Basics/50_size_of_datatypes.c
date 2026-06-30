#include <stdio.h>

int main()
{
    int a = 30 * 1000 + 2768;
    printf("%d\n", a); // 32768

    short s = 30 * 1000 + 2768;
    printf("%d\n", s); // -32768 !!
    // Exceeding the range of short datatype. That's why behaving like this.

    // In past integer also used to print -32768;
    // But, why?

    // On some older systems, int was 2 bytes.
    // In such systems, the result could also overflow.

    s = 30 * 1000 + 2767; // -> just made 7 instead of 8
    printf("%d\n", s); // 32767 (Works)

    // Data types:
    int i = 3;
    float y = 3.14;
    char ch = 'A';
    short z = 4;
    long x = 32768;
    long long ll = 123456789;
    return 0;
}

// int v/s short: (short is smaller in size)
// short: 2 bytes -> 16 bits  ||  -32768 to 32767  ||  2^16 = 65536
// short: 2 bytes -> 16 bits  ||  -2^15 to 2^15-1  ||  2^16 numbers
// int: 4 bytes -> 32 bits  || -2^31 to 2^31-1  ||  2^32 numbers

// long long: 8 bytes -> 64 bits  || -2^63 to 2^63-1  ||  2^64 numbers

// char: 1 byte -> 8 bits -> typically 256 possible values
