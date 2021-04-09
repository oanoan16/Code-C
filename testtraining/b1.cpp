#include <stdio.h>
#include <string.h>
int main()
{
	long long  a[100000],n,x,c;
	scanf("%lld",&n);
	printf("%d\n",1);
	for (int  i=2; i<=n; i++)
	{
		printf("%lld ",i);
		c=i;
		x=n-1;
		for (int j=1; j<=i-1; j++)
		{
			c=c+x;
			printf("%lld ",c);
			x--;
		}
		printf("\n");
	}
	return 0;
}

