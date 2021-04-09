#include <stdio.h>
#include <math.h>
int main()
{	int n,a,b,j,c,dem;
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		scanf ("%d %d",&a,&b);
		dem=0;
		if (a>b)
		{
			c=b;
			b=a;
			a=c;
		}			
		for (int i=a;i<=b; i++ )
		{
			j=sqrt(i);
			if (j*j==i) dem++;
		}
		printf ("%d\n",dem);
	}
	return 0;
}

