#include <stdio.h>
#include <string.h>
// Hoan vi ke tiep

void swap ( char *a, char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	char s[256];
	int i,n;
	gets(s);
	fflush(stdin);
	n=strlen(s);
	i=n-1;
	while (s[i]<s[i-1])
	{
		i--;
	}
	if (i>0)
	{
		for (int j=i-1; j<n; j++)
			if ( s[j] > s[i-1])
			{
				swap(&s[j],&s[i-1]);
				break;
			}
		for ( int k=i; k< (n-i)/2; k++)
			swap(&s[k],&s[n-k+i-1]);
		puts(s);
			
	}			
	

	return 0;
}

