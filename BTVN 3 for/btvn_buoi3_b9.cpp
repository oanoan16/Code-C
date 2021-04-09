#include <stdio.h>
#include <math.h>
int nt(int n)
{
	if (n<2) return 1;
	else 
	{
		for (int i=2 ; i<=sqrt(n); i++)
		if (n%i==0) 
		{
			return 1;
		}	
	return 0;
	}
}
int tong(int n)
{
	int t=0;
	while (n>0) 
	{
		t=t+n%10;
		n=n/10;
	}
	return t;
}
int khonggiam(int n)
{
	int a,b;
	while (n>9)
	{
		a=n%10;
		b=(n/10)%10;
		if (a<b) 
		{
			return 1;
		}
		else n=n/10;
	}
	return 0;
}
int main()
{
	for (int i=1000000; i<10000000; i++)
	if (  (khonggiam(i)==0) && (nt(tong(i))==0) && (nt(i)==0)  ) printf ("%d ",i);	
	return 0;
}

