#include <stdio.h>
int main()	
{
	int a[100000], b[100000];
	int n,x;
	scanf("%d %d",&n,&x);
	for (int i=1; i<=n; i++)
			scanf("%d",&a[i]);

	a[n+1]= 1000000000; a[0]=-1000;
	for (int i=n+1; i>=0; i--)
	{
		if (a[i]>x) a[i]=a[i-1];
		else 
		{
			a[i+1]=x;
			break;
		}
	}
	for (int i=1; i<=n+1; i++) 
		printf ("%d ",a[i]);
	return 0;
}


//#include <stdio.h>
//int main()	
//{
//	int a[100000];
//	int n,x;
//	scanf("%d%d",&n,&x);
//	for (int i=1; i<=n; i++)
//		scanf("%d",&a[i]);	
//	a[0]=-10000;
//	a[n+1]=1000000;
//	for (int i=0; i<=n+1; i++)
//	{
//		if (a[i]<=x && a[i+1]>x)
//			{	
//				for (int j=n+1; j>=i+2; j--)
//					a[j]=a[j-1];
//				a[i+1]=x;
//				break;
//			}		
//	}
//	for (int i=1; i<=n+1; i++) 
//		printf ("%d ",a[i]);
//	return 0;
//}

