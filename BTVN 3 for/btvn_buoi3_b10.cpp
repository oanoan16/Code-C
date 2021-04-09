#include <stdio.h>
int main()
{
	int n,i,a,b,f;
	scanf("%d",&n);
	a=1;	b=1;	f=0;	i=3;
	if (n==1||n==2) printf ("1");
	else 
	{
		while (i<=n)
		{
			f=a+b;
			a=b;
			b=f;
			i++;
		}
			printf("%d",f);
	}		
	return 0;
}

