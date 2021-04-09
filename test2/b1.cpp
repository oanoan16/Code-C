#include <stdio.h>
#include <string.h>

//1)	Ptit 125I

int post=0;
int a[500000];
// tim max
int maxarr( int b, int c)
{
	
	int max=a[b];
	for (int i=b+1; i<=c; i++)
		if (a[i]>max) 
		{
			max=a[i];
			post=i;
		}
	return max;
}
int main()
{
	int n,k,x,j,start,end;
	scanf("%d%d",&n,&k);
	scanf("%d",&x);
	j=n-1;
	while (x!=0)
	{
		a[j]=x%10;
		x=x/10;
		j--;
	}
	for (int i=0; i<n; i++)
	start=0;
	end=k;
	for (int i=1; i<=(n-k); i++)
	{
		printf("%d",maxarr(start,end));
		start=post+1;
		end=end+1;
	}
	return 0;
}

