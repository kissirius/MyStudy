#include <stdio.h>


void test1(char *s)
{

	printf("test1: %s\n", s);
	*(s+1) ='b';	
	printf("test1: %s\n", s);

}
void test2(char s[])
{

	printf("test2: %s\n", s);
	*(s+1) = 'b';
	printf("test2: %s\n", s);
}

int main()
{
	char s1[] = "aaaaaa"	;
	test1(s1);
	printf("===================\n");
	char s2[] = "aaaaaa"	;
	test2(s2);

	return 0;
}
