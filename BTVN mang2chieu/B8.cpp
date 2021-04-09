#include <stdio.h>
int main()
{
	long long s=0, a[100][100];
	int n;
	scanf("%d",&n);	
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			scanf("%lld",&a[i][j]);			
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if (i==j) s=s+a[i][j];
	printf ("%lld",s);
	return 0;
}

