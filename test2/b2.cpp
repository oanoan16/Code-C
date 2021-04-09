#include <stdio.h>
#include <string.h>

// 2 PTIT127C
void swap (int *a, int *b )
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a[100000],b[100000],n, count=1;
	scanf("%d",&n);
	for ( int i=0; i<n; i++ )
		scanf("%d%d",&a[i],&b[i]);
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
		{
			if (b[i]>b[j])
			{
				swap(&b[i],&b[j]);
				swap(&a[i],&a[j]);
			}
		}
	int endtime=b[0];
	for (int i=1; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (a[j]>=endtime )
			{
			count++;
			endtime=b[j];
			i=j+1;
			}
		}
	}
	printf("%d",count);
	return 0;
}

