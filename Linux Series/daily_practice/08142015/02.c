#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    char *p;
    int po, sign;

    a = 123.45;
    b = -2345.754;
    p = ecvt(a, 5, &po, &sign);

    printf("float: %f string: %s  dot: %d sign: %d\n", a, p, po, sign);

    p = ecvt(b, 7, &po, &sign);
    printf("float: %f string: %s  dot: %d sign: %d\n", a, p, po, sign);

    return 0;
}
