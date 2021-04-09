#include <stdio.h>
#include <math.h>
int main()
{
	int a[100000];
	int n,dem,max,keymax,j;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	max=1;
	keymax=0;
	for (int i=0; i<n-1; i++)
		{
			dem=1; j=i+1;
			while (a[i]<a[j])
			{
				dem=dem+1;
				if (dem>max) 
				{
					max=dem;
					keymax=j;
				}
				i++;
				j++;
			}
		}
	printf("%d %d",max,keymax-max+1);
	return 0;
}

