#include <stdio.h>
#include <string.h>
long long sumDiv( long long b )
{
	long long s=0;
	while (b >0)
	{
		s=s+b%10;
		b=b/10;
	}
	return s;
}
	
int main()
{
	long long  c=0,n,x;
	scanf("%lld",&x);
	for ( int i=1; i<=x; i++)
	{
		scanf("%lld",&n);
		while (n>=10)
		{
			n=sumDiv(n);
		}
		printf("%lld\n",n);
	
	}	
	return 0;
}

