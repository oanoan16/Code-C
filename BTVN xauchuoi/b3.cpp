#include <stdio.h>
#include <string.h>
int main()
{
	char s[256];
	int n, j=0, c=0;
	gets(s);
	n=strlen(s);
	for (int i=1; i<=n; i++)
	{
		if (s[i]!=32 || s[i-1]!=32)
		{
			s[j]=s[i];
			j++;
		}
	}	
	strlwr(s);
	for (int i=0; i<strlen(s); i++)
	{
		if (i==0 || s[i-1]==32) s[i]=s[i]-32; 
	}
	puts(s);      
	return 0;
}

