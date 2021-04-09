#include <stdio.h>
#include <string.h>
int main()
{
	int n,m,k,s=0,a=0,c=0;
	scanf("%d%d%d",&n,&m,&k);
	for ( int i=1; i<=n; i++)
	{
		if ( i==k )
			s=s+i+1;
		else 
			s=s+i;
	}
	a=m%s;
	for (int i=1; i<=n ; i++)
	{
		if (i==k)
		{
			c=i+1;
		}
		else c=i;
		if (a-c>=0)
			a=a-c;
		else break;
	}
	printf("%d\n",a);

	return 0;
}

