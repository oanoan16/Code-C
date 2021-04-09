#include <stdio.h>
int main()
{
	long long n,a,b;
	scanf ("%lld",&n);
	a=0;
	b=n;
	while (n>0)
	{
		a=a*10+ n%10;
		n=n/10;
	}
	if (a==b) printf ("YES");
	else printf("NO");
	return 0;
}

