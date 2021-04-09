#include <stdio.h>
int main()
{
	int a[100000];
	int n,b,c;
	float s;
	s=0;
	scanf("%d %d%d",&n,&b,&c);
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for (int i=b; i<=c; i++)
	s=s+(float)a[i];
	printf("%.4f",s/(c-b+1));
	return 0;
}

