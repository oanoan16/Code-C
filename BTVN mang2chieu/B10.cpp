#include <stdio.h>
#include <math.h>
int kt(int x)
{
	if (x<2) return 0;
	else 
	{
		for (int i=2; i<=sqrt(x); i++)
			if (x%i==0) 
				{
					return 1;
					break;
				}
		return 0;
	}
}
int main()
{
	int a[10000]={0},n,dem,b;
	scanf("%d",&n);	
	dem=0;
	b=1;
	while (dem<n*n)
	{		
		b++;
		if (kt(b)==0) 
		{
			dem++;
			printf("%d ",b);
			if (dem%n==0) printf("\n");
		}
	}
	return 0;
}

