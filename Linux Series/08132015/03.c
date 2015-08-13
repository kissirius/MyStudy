#include <stdio.h>

int main()
{
    char ch;
    ch = getchar();
    switch(ch)
    {
        case 'a':
            printf("Enter \'a\'\n");
            break;
        case 'b':
            printf("Enter \'b\'\n");
            break;

        case 'c':
            printf("Enter \'c\'\n");
            break;

        default:
            printf("Enter error!\n");
    }
    return 0;
}
