#include <stdio.h>
#include <math.h>
int main()
{
	int n,kt;
	scanf("%d",&n);
	kt=0;
	if (n<2) printf ("no");
	else 
	{
		for (int i=2 ; i<=sqrt(n); i++)
		if (n%i==0) 
		{
			kt=1;
			break;
		}	
		if (kt==1) printf("no");
		else printf("yes");
	}
	return 0;
}

