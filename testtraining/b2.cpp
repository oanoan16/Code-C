#include <stdio.h>
#include <string.h>
int a[1002][1002],b, c,n,k,max=0,sum;
int main()
{
	scanf("%d%d",&n,&k);
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			scanf("%d",&a[i][j]);
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
				a[i][j]=a[i][j]+a[i-1][j]+a[i][j-1]	-a[i-1][j-1];
		}		
	}
	for (int i=k; i<=n; i++)
		for (int j=k; j<=n; j++)
		{
			if (i==k) sum=a[i][j]-a[i][j-k];
			else
				{
					if (j==k) sum=a[i][j]-a[i-k][j];
					else 
						sum=a[i][j]-a[i-k][j]-a[i][j-k]+a[i-k][j-k];
				}
			if (max<sum) max=sum;
		}
	printf("%d",max);
}

