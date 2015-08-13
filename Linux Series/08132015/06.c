#include <stdio.h>


int main()
{
    int i;
    int sum;
    
    do
    {
        sum = sum +i;
        i++;
    }while(i<=100);

    printf("%d\n", sum);
    return 0;
}

