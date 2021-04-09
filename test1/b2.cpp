#include <stdio.h>
#include <string.h>
int main()
{ 
	int n,a[100];
	n=1;
	while (n!=0)
	{
		scanf("%d",&n);
		for (int i=1; i<=n; i++)
		scanf("%d",&a[i]);
		a[0]=0;
		for (int i=1; i<=n; i++)
		{
			for (int j=1; j<=(a[i]-a[i-1]) ; j++)
				printf("%d ",i);
		}	
	}
	
	return 0;
}

