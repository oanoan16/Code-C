#include <stdio.h>
int main()
{	long long a,b,v;
	scanf("%lld%lld%lld",&a,&b,&v);
	if ((v-b)%(a-b)==0) printf ("%lld",(v-b)/(a-b));
	else printf ("%lld",(v-b)/(a-b)+1);
	return 0;
}

