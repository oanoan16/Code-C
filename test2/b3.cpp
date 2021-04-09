#include <stdio.h>
#include <string.h>
//PTIT136C
int main()
{
 	int n,a0;
 	int a[100][100], b[1000];
 	scanf ("%d",&n);
 	for (int i = 0; i<n ; i++)
 		for (int j=0; j<n ; j++)
 			scanf("%d",&a[i][j]);
 	a0=( a[0][1] + a[0][2] - a[1][2] )/2;
 	printf("%d ",a0);
 	for (int i=1; i<n ; i++)
 		printf("%d ",a[0][i]-a0);
	return 0;
}

