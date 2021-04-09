#include <stdio.h>
int main()
{
	int a[100000], b[100000];
	int n,max=0;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1 ; j<n; j++)
			if (b[i]>0)
			{
				if (a[i]==a[j])
				{
					b[i]++;
					b[j]--;	
				}
			}
		if (max < b[i]) max = b[i];
	}
	for (int i=0; i<n; i++) 
		if (b[i]==max) printf ("%d ",a[i]);
	return 0;
}

