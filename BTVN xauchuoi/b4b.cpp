#include <stdio.h>
#include <string.h>
int main()
{
	char s[100],smax[100],smin[100];
	int max,min,keymax,keymin;
	gets(s);
	const char s1[2]=" ";
	char *token;
	token=strtok(s,s1);
	max=strlen(token);
	min=strlen(token);
	strcpy(smax,token);
	strcpy(smin,token);
	while (token!=NULL)	
	{
		
		if (strlen(token)>max)
		{
			max=strlen(token);
			strcpy(smax,token);
			token=strtok(NULL,s1);
			continue;
		}		
		if (strlen(token)<min)
			{
				min=strlen(token);
				strcpy(smin,token);
			}		
		token=strtok(NULL,s1);		
	}
	puts(smax);
	puts(smin);	
	return 0;
}

