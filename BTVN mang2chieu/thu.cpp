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
	int a[100][100]={0},n,d,i,b,dem;
	scanf("%d",&n);	
	d=1; dem=0;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			while (a[i][j]!=0 && d<=n*n)     
			{
				d++;
				if (kt(d)==0) 
				{
					a[i][j]=d;
					printf ("%d ",a[i][j]);
					dem++;
				}
			}
	    }
		printf("\n");		
	}
   	return 0;
}
