#include <stdio.h>
int main()
{
	int a[100][100],n,m;
	scanf("%d%d",&m,&n);	
	for (int i=1; i<=m; i++)
		for (int j=1; j<=n; j++)
			scanf("%d",&a[i][j]);
	int maxL=-100000, maxC=-100000,sL,sC, keyL=0, keyC=0;
	for (int i=1; i<=m; i++)
	{
		sL=0;
			for (int j=1; j<=n; j++)
			{
				sL=sL+a[i][j];
				if (sL>maxL) 
				{
					maxL=sL;
					keyL=i;
				}
			}
	}
	for (int j=1; j<=n; j++)
	{
		sC=0;
		for (int i=1; i<=m; i++)
			sC=sC+a[i][j];
			if (sC>maxC)
			{
				maxC=sC;
				keyC=j;
			}
	}		
	printf("%d %d\n",maxL,keyL);
	printf("%d %d",maxC,keyC );
	return 0;
}

