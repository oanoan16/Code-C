#include <stdio.h>
#include <math.h>
int main()
{	
//	int a[5]={1,2,3,4,5};
//	printf("%d",a[0]) ;
//	for (int i=0; i<5; i++)
//		printf("chi so:%d, gia tri:%d\n",i,a[i]);
//....................

//	int a[100];
//	for (int i=0; i<10; i++)
//		scanf("%d",&a[i]);
//	for (int i=0; i<10; i++)
//		printf("chi so:%d, gia tri:%d\n",i,a[i]);
//-----------------------

//	int a[100];
//	int n,s;
//	scanf("%d",&n);
//	for (int i=0; i<=n-1; i++)
//		scanf("%d",&a[i]);
//	for (int i=0; i<=n-1; i++)
//		if (i%2==0) s=s+a[i];
//	printf("%d ",s);	
// ===================

//	int n,k;
//	int a[100];
//	scanf("%d %d",&n,&k);
//	for (int i=0; i<=n-1; i++)	
//		scanf("%d",&a[i]);
//	for (int i=0; i<=n-1; i++)
//		if(a[i]==k)	printf("%d ",i);
//================================

//	int n,b;
//	int a[100];
//	scanf("%d",&n);
//	for (int i=0; i<n; i++)	
//		scanf("%d",&a[i]);
//	for (int i=0; i<=n-2; i++)	
//		for (int j=i+1; j<=n-1; j++)
//			if( a[i]<a[j] )
//			{
//				a[i]=b;
//				a[i]=a[j];
//				a[j]=b;
//			}			
//	printf("%d %d",a[0], a[1]);
// ====================
		
	int n,count,d;
	int a[100];
	int b[100];
	scanf("%d",&n);
	d=0;
	for (int i=0; i<n; i++)	
		scanf("%d",&a[i]);
	for (int i=0; i<=n-1; i++)	
	{
		count=0;
		for (int j=2; j<=sqrt(a[i]); j++)	
		{
			if (a[i]%j==0 ) count=count+1 ;
		}
		if (count==0  && a[i]!=0 && a[i]!=1) 
		{
			d=d+1;
			b[d]=a[i];
		}
	}
	printf("%d\n",d);
	for (int k=1; k<=d; k++)
	printf("%d ",b[k]);
	return 0;
}

