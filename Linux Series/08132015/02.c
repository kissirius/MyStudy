#include <stdio.h>

int main()
{

    int a= 2, b=2, c=1;

    if(a == b)
    {
        if(b == c)
        {
            printf("a == b == c\n");
        }
        else
            printf("b != c\n");
    }
    else
    {
        printf("a != b\n");
    }
    
    return 0;
}
