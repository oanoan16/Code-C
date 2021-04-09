#include <stdio.h>
int main()
{	
	int n;
	float s;
	scanf("%d",&n);
	s=0;
	for (int i; i<=n; i++)
	{
		s=s+(1/(float)i);
	}
	printf ("%.4f",s);
	return 0;
}

