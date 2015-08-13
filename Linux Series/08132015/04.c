#include <stdio.h>

int main()
{

    int i= 0;
    int sum = 0;

    for(;;)
    {
        if( i <= 100)
        {
            sum += i;
        }
        else
            break;
        i++;
    }

    printf("%d\n", sum);

    return 0;
}
