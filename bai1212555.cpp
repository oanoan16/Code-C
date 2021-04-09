#include <stdio.h>
int main()
{
	scanf("%d%d%d",&m,&n,&k);
	for (int i=0;i<m; i++)
		for (int j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	for (int i=0; i<n; i++)
		for (int j=0; j<k; j++)
			scanf("%d",a[i][j]);
	


	return 0;
}

