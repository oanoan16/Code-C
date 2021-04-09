#include <stdio.h>
int main()
{
	int a[100][100],n,kt=0;
	scanf("%d",&n);	
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			scanf("%d",&a[i][j]);			
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if (a[i][j]!=a[j][i]) 
			{
				kt=1; break;
			}
	if (kt!=0) printf("NO");
	else printf("YES");
	return 0;
}

