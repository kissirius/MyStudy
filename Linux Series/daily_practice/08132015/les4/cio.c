#include <stdio.h>

/*
 *stdin 
 *stdout
 *stderr
 * */

int main()
{

    fprintf(stdout, "please input the value a: \n");

    int a;
    fscanf(stdin, "%d", &a);

    if(a<0)
    {
        fprintf(stderr, "the value must > 0.\n");
    }

    return 0;
}
