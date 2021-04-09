#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a+b>c) && (b+c>a) && (c+a>b))
	{
		printf("YES\n");
		if ((a==b) || (b==c) || (c==a)) 
			printf("YES\n");
		else 
			printf("NO\n");
		if ((a==b) && (b==c) && (c==a))
			printf ("YES\n");
		else 
			printf ("NO\n");
		if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
			printf ("YES\n");
		else 
			printf ("NO\n");
	} 
	else 
	{
		printf ("NO\n");
		printf ("NO\n");
		printf ("NO\n");
		printf ("NO\n");
	}
	
}
