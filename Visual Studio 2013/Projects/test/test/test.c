#include <stdio.h>
#include <stdlib.h>

int ret[2];
int i, j;

/**
*  * Note: The returned array must be malloced, assume caller calls free().
*   */
int *twoSum(int* nums, int numsSize, int target) {

	for (i = 0; i<numsSize; i++)
	for (j = 0; j< numsSize; j++)
	if (j != i)
	if (nums[j] == target - nums[i])
	{
		ret[0] = i;
		ret[1] = j;
		return ret;
	}
}

int main()
{
	int target;
	int number[4] = { 2, 7, 11, 15 };
	int *p;

	p = malloc(2 * sizeof(*p));

	scanf("%d", &target);
	p = twoSum(number, sizeof(number) / sizeof(*number), target);
	printf("index1 = %d, index2 = %d\n", p[0], p[1]);

	free(p);
	p = NULL;

	return 0;
}