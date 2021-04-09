#include <stdio.h>
#include <string.h>
int main()
{
	int a[100][100], t[100][100], n,k,max=0,sum;
	scanf("%d%d",&n,&k);
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			scanf("%d",&a[i][j]);
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			int s=0;
			for (int x=1; x<=i; x++)
				for (int y=1; y<=j; y++)
					s=s+a[x][y];
			t[i][j]=s;
			printf("%d ",t[i][j]);
		}
		printf("\n");
		
	}
			
	for (int i=k; i<=n; i++)
		for (int j=k; j<=n; j++)
		{
			if (i==k) sum=t[i][j]-t[i][j-k];
			else
				{
					if (j==k) sum=t[i][j]-t[i-k][j];
					else 
						sum=t[i][j]-t[i-k][j]-t[i][j-k]+t[i-k][j-k];
				}
			if (max<sum) max=sum;
		}
	printf("%d",max);
}

