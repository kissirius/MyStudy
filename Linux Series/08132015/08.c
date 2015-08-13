#include <stdio.h>

int main()
{
    int i =1;
    int sum = 0;

loop:
    if(i<=100)
    {
        sum += i;
        i++;
        goto loop;
    }

    printf("i=%d\n", i);
    printf("sum = %d\n", sum);

    return 0;
}
