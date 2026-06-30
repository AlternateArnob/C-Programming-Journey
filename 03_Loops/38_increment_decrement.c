// Increment and Decrement Operators

// Increment (++) -> increases value by 1
// Decrement (--) -> decreases value by 1

// Post:
// x++ => x = x + 1
// x-- => x = x - 1

// Pre:
// ++x => x = x + 1
// --x => x = x - 1

// Though pre and post look like doing the same work,
// they work slightly differently.

// Post:
// x++ -> Use the value first, then increase by 1
// x-- -> Use the value first, then decrease by 1

// Pre:
// ++x -> Increase by 1 first, then use the value
// --x -> Decrease by 1 first, then use the value

#include <stdio.h>

int main()
{
    // Increment operator:

    int a = 5;

    a++; // Post increment
    printf("a = %d\n", a); // 6

    ++a; // Pre increment
    printf("a = %d\n", a); // 7


    printf("\n-----------------\n\n");


    // Decrement operator:

    int b = 5;

    b--; // Post decrement
    printf("b = %d\n", b); // 4

    --b; // Pre decrement
    printf("b = %d\n", b); // 3


    printf("\n-----------------\n\n");


    // Pre-increment: First increase the value, then use the value

    int x = 5;
    int y;

    y = ++x;

    printf("x = %d y = %d\n", x, y);

    // x becomes 6 first
    // y gets 6


    printf("\n-----------------\n\n");


    // Post-increment: First use the value, then increase the value

    int p = 5;
    int q;

    q = p++;

    printf("p = %d q = %d\n", p, q);

    // q gets old value 5
    // p becomes 6 after assignment


    printf("\n-----------------\n\n");


    // Pre-decrement: First decrease the value, then use the value

    int m = 5;
    int n;

    n = --m;

    printf("m = %d n = %d\n", m, n);

    // m becomes 4 first
    // n gets 4


    printf("\n-----------------\n\n");


    // Post-decrement: First use the value, then decrease the value

    int r = 5;
    int s;

    s = r--;

    printf("r = %d s = %d\n", r, s);

    // s gets old value 5
    // r becomes 4 after assignment


    printf("\n-----------------\n\n");


    // Using pre and post operators inside expressions:

    x = 5;
    printf("x = %d\n", x); // 5
    printf("x = %d\n", x++); // 5   // Use the value, then increase the value.
    printf("x = %d\n", x); // 6

    x = 5;
    printf("x = %d\n", x); // 5
    printf("x = %d\n", ++x); // 6   // Increase the value, then use the value.
    printf("x = %d\n", x); // 6

    printf("\n");

    y = 5;
    printf("y = %d\n", y); // 5
    printf("y = %d\n", y--); // 5   // Use the value, then decrease the value.
    printf("y = %d\n", y); // 4

    y = 5;
    printf("y = %d\n", y); // 5
    printf("y = %d\n", --y); // 4   // Decrease the value, then use the value.
    printf("y = %d\n", y); // 4
    return 0;
}
