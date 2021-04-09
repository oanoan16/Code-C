#include <stdio.h>
#include <string.h>
int main()
{
	char s[256],smax[256]={0},smin[256]={0},s1[256];
	int n,max=0, min=1e9,j;
	gets(s);
	n=strlen(s);
	for (int i=0; i<=n ; i++)
	{
		j=0;
		memset(s1,0,sizeof(s1));
		while (s[i]!=32 && s[i]!='\0')
		{
			s1[j++]=s[i++];
		}
		if (strlen(s1)>max)
		{
			max=strlen(s1);
			strcpy(smax,s1);
		}
		if (strlen(s1)<min)
		{
			min=strlen(s1);
			strcpy(smin,s1);
			smin[min]=0;
		}
	}	
	puts(smax);
	puts(smin);
	return 0;

}

