#include <stdio.h>
#include <string.h>
int main()
{
	long long n,gt,m;
	double s,c;
	scanf("%lld",&n);
	m=10000000000;
	gt=1;
	s=0;
	for (int i=1; i<=n; i++)
	{
		gt=gt*i;
		s=s+m/(double)gt;
	}
	printf("%.4lf",s);
	return 0;
}

