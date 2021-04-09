#include <stdio.h>
int main()
{	
	int a[100000];
	int n,kt;
	scanf("%d",&n);
	kt=1;
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for (int i=0; i<n/2; i++)
		if (a[i]!=a[n-i-1])
		{	
			kt=0;
			break;
		}
	if (kt!=1) printf ("NO");
	else printf ("YES");
	return 0;
}

