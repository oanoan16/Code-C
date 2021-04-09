#include <stdio.h>
#include <string.h>
void swap( int *a, int*b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int n,a[10000],b[10000],c[10000],d[10000],e[1000],dem; 
	scanf("%d",&n);
	for ( int i=1; i<=n ; i++)
	{
		scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
		e[i]=i;
	}
	for ( int i=1; i<n; i++)
		for (int j=i+1; j<=n; j++)
			if (a[i]<a[j])
			{
				swap(&a[i],&a[j]);
				swap(&b[i],&b[j]);
				swap(&c[i],&c[j]);
				swap(&d[i],&d[j]);
				swap(&e[i],&e[j]);
			}
	for (int i=2; i<n; i++)
			if (a[i]==a[1])
			{
				if (b[i]>b[1])
				{
					swap(&b[i],&b[1]);
					swap(&c[i],&c[1]);
					swap(&d[i],&d[1]);
					swap(&e[i],&e[1]);
				}
			}
			else break;
	for (int i=2; i<n; i++)
			if (a[i]==a[1] && b[i]==b[1])
			{
				if (c[i]>c[1])
				{
					swap(&c[i],&c[1]);
					swap(&d[i],&d[1]);
					swap(&e[i],&e[1]);
				}
			}
			else break;
	for (int i=2; i<n; i++)
			if (a[i]==a[1] && b[i]==b[1] && c[i]==c[1])
			{
				if (d[i]>d[1])
				{
					swap(&d[i],&d[1]);
					swap(&e[i],&e[1]);
				}
			}
			else break;
	printf("%d\n",e[1]);
	printf("%d %d %d %d",a[1],b[1],c[1],d[1]);
	return 0;
}

