#include <stdio.h>
int main()
{	
	int a[100000];
	int n,x,count; 
	scanf("%d%d",&n,&x);
	count=0;
	for (int i=0; i<n ; i++ )
		scanf("%d",&a[i]);
	for (int i=0; i<n ; i++ )	
		if (a[i]==x) count=count+1; 	
	printf("%d",count);
	return 0;
}

