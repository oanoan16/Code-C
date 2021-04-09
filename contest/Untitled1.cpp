#include <stdio.h>
int main()
{
	char a[100] [100],b[100][100]={0};
	int x,n,m,dem;
	scanf("%d",&x);
	for (int c=1; c<=x; c++)
	{
		scanf("%d%d",&m,&n);
		for (int i=1; i<=m; i++)
			for (int j=1; j<=n; j++){
				scanf("%c ",&a[i][j]);
				
			}
		for (int i=0; i<=m+1; i++)
		{
			a[i][0]=1;
			a[i][n+1]=1;
		}
		for (int i=0; i<=n+1; i++)
		{
			a[0][i]=1;
			a[m+1][i]=1;
		}
		for (int i=1; i<=m; i++)
		{
			for (int j=1; j<=n; j++)
			{
				if (a[i][j]=='.')
				{
					dem=0;
					for (int k=i-1; k<=i+1; k++)
						for (int l=j-1; l<=j+1; l++)
							if (a[k][l]=='*') dem++;
					b[i][j]=dem+48;
				}
				else 
					if (a[i][j]=='*') b[i][j]='*';
				printf("%c ",b[i][j]);				
			}
			printf("\n");
		}
	}
	return 0;
}

