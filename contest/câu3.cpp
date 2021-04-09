#include<stdio.h>
int main()
{
	int a[101],b[101]={0},n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
		scanf("%d",&a[i]);
//	for (int i=1; i<=n ; i++)
//		for (int j=1; j<=n; j++)
//			if (i==a[j]) printf ("%d ",j);

    for (int i=1; i<=n; i++)   b[a[i]]=i;
    for (int i=1; i<=n; i++) printf("%d ",b[i]);
	return 0;
}
	

