#include <stdio.h>
#include <string.h>
int main()
{	
	char s[256];
	int n,count,j,i,x;
	scanf("%d",&x);
	fflush(stdin);
	for (int a=0; a<x; a++ )
	{
		gets(s);
		n=strlen(s);
		i=0;
		while (i<n)
		{
			count=0;
			j=i;
			while (s[i]==s[j] && j<=n)
			{
				count++;
				j++;
			}
			printf("%d",count);
			printf("%c",s[i]);
			i=j;
		}
		printf("\n");
	}
	return 0;
}

