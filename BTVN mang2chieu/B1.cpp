#include <stdio.h>
int main()
{
	int a[100][100], b[100][100],m,n,k;
	scanf("%d%d%d",&m,&n,&k);	
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	for (int i=0; i<n; i++)
		for (int j=0; j<k; j++)
			scanf("%d",&b[i][j]);
	for (int i=0; i<m;i++)
	{
		for (int l=0; l<k; l++)
		{	
			int s=0;
			for (int j=0; j<n ; j++)
				s=s+a[i][j]*b[j][l];
			printf("%d ",s)	;
		}
		printf("\n");
	}
	return 0;
}

