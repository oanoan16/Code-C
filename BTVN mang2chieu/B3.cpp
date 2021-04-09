#include <stdio.h>
int main()
{
	int a[100][100],n,dau,cuoi,d,b;
	scanf("%d",&n);
	dau=1; cuoi=n; b=1; d=1;
	while (d<=n*n)
	{
		if (dau==cuoi) 
		{
			a[dau][cuoi]=d++;
			break;
		}
		else 
		{
			for (int i=dau; i<=cuoi; i++)
				a[b][i]=d++;
			for (int i=dau+1; i<=cuoi; i++)
				a[i][cuoi]=d++;
			for (int i=cuoi-1; i>=dau; i--)
				a[cuoi][i]=d++;
			for (int i=cuoi-1; i>=dau+1; i--) 
				a[i][dau]=d++;
			dau++; cuoi--; b++;			
		}
	}
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}

