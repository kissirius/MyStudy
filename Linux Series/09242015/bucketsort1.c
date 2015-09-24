#include <stdio.h>

int main()
{
		static int a[1001];
		
		int i, j, t, n;
		
		scanf("%d", &n);
		for(i = 0; i<n;i++)
		{
			scanf("%d", &t);
			a[t]++;
	    }	    	
		printf("================\n");
		
		for(i=0; i<=1000; i++)
			for(j=0; j<a[i];i++)
				printf("%d ", i);
			
		printf("\n\n");

		return 0;
}
