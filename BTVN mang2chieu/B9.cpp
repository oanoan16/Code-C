#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],n,m,c,d,x,y,temp;
	scanf("%d%d%d%d%d%d",&m,&n,&c,&d,&x,&y);
	for (int i=1; i<=m;  i++)
		for (int j=1; j<=n; j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	printf("\n");
	for (int i=1; i<=m; i++)
	{
		if (i==c)
		{
			for (int j=1; j<=n; j++)
			{
				temp=b[c][j];
				b[c][j]=b[d][j];
				b[d][j]=temp;
			}
		}
	}
	for (int i=1; i<=n; i++)
	{
		if (i==x)
		{
			for (int j=1; j<=m ; j++)
			{
				temp=a[j][x];
				a[j][x]=a[j][y];
				a[j][y]=temp;
			}
		}
	}
	for (int i=1; i<=m; i++)
	{
		for (int j=1; j<=n; j++)
			printf ("%d ",b[i][j]);
		printf ("\n");
	}
	printf("\n");
	for (int i=1; i<=m; i++)
	{
		for (int j=1; j<=n; j++)
			printf ("%d ",a[i][j]);
		printf ("\n");
	}
	return 0;
}

