#include <stdio.h>
#include <math.h>
int main()
{
	int n,a,i;
	scanf("%d",&n);
	a=(n/2)+1;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n;j++)
		{
		if ((i+j)<=a || (j-i)>=a || (i-j)>=a || (i+j-n-1)>=a)
		printf(" ");
		else printf ("*");
	    }
		printf("\n");
    }
	return 0;
}

