#include<stdio.h>
int dem(int n,int p)
{
	int d=0,a;
	for (int i=2 ; i<=n; i++)
		if (i%p==0) 
		{
			d++;
			a=i;
			while (a!=1)
			{
				a=a/p;
				if (a%p==0) d++;
				else break;
			}
		}		
	return d;
}
int main() 
{
	int a[100],b[100],t;
	scanf("%d",&t);
	for (int i=0; i<t; i++)
		scanf("%d%d",&a[i],&b[i]);
	for (int i=0; i<t; i++)
			printf("%d\n",dem(a[i],b[i]));			
	return 0;
		
}

