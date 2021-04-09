
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[256], s2[256];
	int a1[1000],a2[1000];
	int d=0, e=0,a=0,b=0;
	gets(s1);
	gets(s2);
	strcat(s1,s2);
	puts(s1);
	for ( int i=strlen(s1); i>=0; i--)
	{
		if( d+s1[i]+s2[i]-48*2>=10 )
		{
			a=d+s1[i]+s2[i]-48*2-10;
			d=1;
		}
		else 
		{a=d+s1[i]+s2[i]-48*2;
			d=0;
		}
		a1[i]=a;
		if ( s1[i]-s2[i]-e<0 )
		{
			b=10+s1[i] -s2[i]-e;
			e=1;
		}
		else
		{
			b=s1[i]-s2[i] -e;
			e=0;
		}
		a2[i]=b;
	}
	for (int i=0; i<strlen(s1) ; i++)
	printf("%d",a1[i]);
	printf("\n");
	for (int i=0; i<strlen(s1) ; i++)
	printf("%d",a2[i]);
	
	return 0;
}
