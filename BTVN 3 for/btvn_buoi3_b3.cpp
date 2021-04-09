#include <stdio.h>
int main()
{	
	int n,a;
	scanf("%d",&n);
	a=n;
	for (int i=1; i<=n ; i++)
	{
		for (int j=1; j<=(2*n-1); j++)
		{
			if (j==n-i+1 ) 
			{
				for (int k=1; k<=i; k++) printf ("%d ",k);
				for (int h=(i-1); h>=1; h--) printf ("%d ",h);
			}
			printf("  ");
		}
		printf("\n");
	}
	for (int i=n-1; i>=1; i--)
	{
		for (int j=1; j<=2*n-1; j++)
		{
			if (j==n-i+1 )
			{
				for (int k=1; k<=i; k++) printf ("%d ",k);
				for (int h=(i-1); h>=1; h--) printf ("%d ",h);
			}
		printf("  ");
		}
		printf("\n");
	}
	return 0;
}

