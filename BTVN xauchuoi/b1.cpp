#include <stdio.h>
#include <string.h>
int main()
{    
    // bo an co ---> co an bo
	char s[256],s1[256];
	int n;
	gets(s);
	n=strlen(s);
	s[n+1]='\0';
	s[n]=' ';
	for (int i=n; i>=0; i-- )
		if (s[i]==32)
		{
			for (int j=i-1; j>=0; j--)
			{
				if (s[j-1]==32 || j==0)
				{
					for (int k=j; k<=i-1; k++)
						printf ("%c",s[k]);
					printf(" ");
					break;
				}
				
			}
		}
	return 0;
}

