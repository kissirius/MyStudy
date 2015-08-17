#include <stdio.h>

void fun()
{
	int i = 1;
	static int j = 1;
	i = i + 1;
	j = j + 1;
	printf("i = %d, j = %d\n", i, j);
}
int main()
{
	int i;
	for (i = 0; i<3; i++)
	{
		fun();
	}
	return 0;

}