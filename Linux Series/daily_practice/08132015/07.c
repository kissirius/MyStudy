#include <stdio.h>

int main()
{   
    int i;
    int sum = 0;
    scanf("%d", &i);

    do
    {
        sum = sum + i;
        i++;
    }while(i<=10);

    printf("%d\n", sum);

    return 0;

}
