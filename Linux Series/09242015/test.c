#include <stdio.h>

int main()
{
	char *s = "abcd";
	*(s+1)= 'z';
	return 0;
}
