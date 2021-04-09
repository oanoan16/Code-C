#include <stdio.h>
#include <math.h>
int main()
{
	long long a,n;
	scanf("%lld",&n);
	if (n<1)
		printf("NO");
	else 
	{
		a=sqrt(n);
		if (a*a==n)
			printf("YES");
		else 
			printf ("NO");
	}
}
	
