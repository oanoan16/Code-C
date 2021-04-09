#include <stdio.h>
#include <stdlib.h>

// P171PROF

int compare( const void*a, const void *b)
{
	return ( *(int*)a - *(int*)b );
}

int main()
{
	int a[100000],time,count=1,n,tmp;
	scanf("%d",&n);
	for (int i=0; i<n ; i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),compare);
	time=a[0];
	for ( int i=1; i<n ; i++ )
	{ 
		if (a[i]>=time ) 
		{
			time = time +a[i];
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}

