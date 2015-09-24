#include <stdio.h>

int a[101];
int n; 

int quicksort(int left, int right)
{
		int i, j, t; 

		if(left > right)
				return;

		t = a[left];
		i = left;
		j = right;

		while(i != j)
		{
				while (a[j] >= t && i < j )
						j--;
				while (a[i] >= t && i < j)
						i++;

				if(i < j)
				{
						t = a[i];
						a[i] = a[j];
						a[j] = t;
				}
		}
		a[left] = a[i];
		a[i] = t;

		quicksort(left, i-1);
		quicksort(i+1, right);

		return ;
}


int main()
{
		int i, j;
		scanf("%d", &n);	

		for(i=1; i<=n;i++)
				scanf("%d", &a[i]);

		quicksort(1, n);

		for(i=1; i<=n; i++)
				printf("%d ", a[i]);


		printf("\n\n");


		return 0;
}
