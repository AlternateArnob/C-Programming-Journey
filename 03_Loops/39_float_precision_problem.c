// Float Precision Problem

#include <stdio.h>

int main()
{
    float a = 0.1;
    printf("%.20f\n", a);
    // Output:
    // 0.10000000149011611938
    //
    // 0.1 cannot be represented exactly in binary.
    // Therefore, float stores the closest possible approximation.

    // ---------- ---------- ---------- ---------- ----------

    float x = 2.0;
    int y = 2;
    if(x == y)
    {
        printf("Equal\n");
    }
    // This works because 2.0 can be represented exactly.

    // ---------- ---------- ---------- ---------- ----------

    float p = 0.1;
    if(p == 0.1)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    // Avoid comparing floating point numbers using ==
    // because decimal values may not be stored exactly.

    // ---------- ---------- ---------- ---------- ----------

    float u = 1.01;
    int v = 1;
    if(u-v == 0.01)
    {
        printf("At least this works\n");
    }
    else
    {
        printf("Even this doesn't work\n");
    }
    // Even simple calculations with float can have precision issues.
    // Mathematically:
    // 1.01 - 1 = 0.01
    //
    // But internally, the stored values may be slightly different.
    return 0;
}
