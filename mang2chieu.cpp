#include <stdio.h>
int main()
{	
	int a[100][100],b[100][100]={0},n,m,s,temp=0;
//	scanf("%d%d",&n,&m);
//	for (int i=0; i<n; i++)
//		for (int j=0; j<m; j++)
//			scanf("%d", &a[i][j]);
//	for (int i=0; i<n; i++)
//	{
//		for (int j=0; j<m; j++)
//			printf ("%d ",a[i][j]);
//		printf("\n");
//	}
//	


//	scanf("%d",&n);
//	s=0;
//	for (int i=0;i<n; i++)
//	{
//		for (int j=0; j<n; j++)
//			{
//				a[i][j]=s;
//				printf("%d ",a[i][j]);
//				s+=2;
//			}
//		printf("\n");
//	}
	
//	scanf("%d",&n);
//	for (int i=0;i<n; i++)
//		for (int j=0; j<n; j++)
//			scanf("%d",&a[i][j]);
//	for (int i=0; i<n; i++)
//		for (int j=0; j<n; j++)
//			scanf("%d",&b[i][j]);
//	for (int i=0; i<n; i++)
//	{
//		for (int j=0; j<n; j++)			
//			printf("%d ",a[i][j]+b[i][j]);
//		printf("\n");
//	}
	
	scanf("%d",&n);
	for (int i=0;i<n; i++)
		for (int j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	for (int i=0;i<n; i++)
	{
		for (int j=n-1; j>=0; j--)
			printf ("%d ",a[j][i]);
		printf("\n");
	}
	return 0;
}

