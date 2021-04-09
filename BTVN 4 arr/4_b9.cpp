#include <stdio.h>
int main()
{
	int a[100000],b[100000];
	int n,count;
	scanf("%d",&n);
	while (1)
	{
		for (int i=0; i<n; i++)
			scanf("%d",&a[i]);
		bool kt=true;
		for (int i=0; i<n; i++)
			if (a[i]<11 || a[i]>99) kt=false;
		if (kt==true) break;
		else printf("Nhap lai\n");
	}
	count=0;
	for (int i=0; i<n; i++)
	{
		for (int j=a[i]+1; j<100; j++)
			if (b[j]!=0) 
			{
				count++;
				break;
			}
		b[a[i]]++;
	}
	printf ("%d",count);	
	return 0;
}

