#include <stdio.h>

int main()
{
	static int a[11];
    int i, j, t;
// 赋初值为0
// 	for(i=0; i<=10; i++)
//		a[i] = 0;

	for(i=1; i<=5; i++)
	{
		scanf("%d", &t);
		a[t]++;
	}

	for(i=0; i<=10; i++)
		for(j =1; j<=a[i]; j++) // 由于每个数组变量存放的是有多少个，所以，所以直接用数组变量里的值来循环！
			printf("%d ", i);

	printf("\n\n");


	return 0;
}

//缺点：1. 有的数组申请的变量用不到，浪费空间；
//      2. 可以排序的数值范围与刚开始申请的数组有关！
