#include <stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=0; b=0;
	for (int i=(n/5); i>=0; i--)
	{
		if ((n-5*i)%3==0)
		{	
			a=i;
			b=(n-5*i)/3;
			break;
		}
	}
	if ((a+b)!=0) printf("%d",a+ b); 
    else printf ("IMPOSSIPLE");
	return 0;
}
