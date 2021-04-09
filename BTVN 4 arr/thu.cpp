#include <stdio.h>
#include <math.h>
int main()
{
	int a[100000];
	int n;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	int start = 0;
	int length = 1;
	int dem = 1;
	for (int i = 0;i<n-1;i++)
	{
 
		if (a[i]<a[i+1]) dem++;
		else 
		{
			if (dem > length)
			{
				length =dem;
				start = i - dem;
			}
			dem = 1;
		}	
	}
	if (dem > length)
		{
			length = dem;
			start = n - dem;
		}
	printf("%d %d",start+1,length);
	return 0;
}
