#include <stdio.h>
int main()
{
	long long  a,b,c,min,max;
	scanf ("%lld%lld%lld",&a,&b,&c);
	min=a;
	max=a;
	if (a>b) min=b;		
	else max=b;
	if (c>max) max=c;
	else 
	{	
		if (c<min) min=c;
	}
	printf("%lld %lld",min,max);
}
