#include <stdio.h>
int main()
{
	int a[100][100], b[100][100],n,sum1=0, sum2=0;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	for (int i=0; i<n; i++)
	 	for (int j=0; j<n; j++)
	 	{
	 		if (j<=i)   sum1=sum1+a[i][j];
	 		if (j-i>=0) sum2=sum2+a[i][j];
	 	}
	printf("%d\n",sum1);
	printf("%d",sum2);
	return 0;
}

