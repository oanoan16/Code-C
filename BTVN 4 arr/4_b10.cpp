#include <stdio.h>
int main()
{
	int a[100000];
	int n,b;
	b=0;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
		{
//			if (a[i]>a[j])	
//			{
//				b=a[j];
//				a[j]=a[i];
//				a[i]=b;
//			}

			if (a[i]<a[j])	
			{
				b=a[j];
				a[j]=a[i];
				a[i]=b;
			}
		}
	for (int i=0; i<n; i++) printf("%d ",a[i]);
	return 0;
}

