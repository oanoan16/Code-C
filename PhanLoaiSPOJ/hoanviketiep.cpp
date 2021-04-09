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
	int i,n,x,a,k;
	scanf("%d",&x);
	for (int l = 1; l <= x; l++)
	{
		scanf("%d",&a);
		printf("%d ",l);		
		scanf("%s",s);		
		i=strlen(s)-1;
		while (s[i] <= s[i-1] && i>=0 )
		{
			i--;
		}
		if (i>0)
		{
		    n=i;
			for (int j=strlen(s)-1; j>=i; j--)
				if ( s[j] > s[i-1])
				{
                    swap(&s[j],&s[i-1]);
					break;
				}
			for (  k=n; k <= ((strlen(s)-1)-n)/2 +n ; k++)
				swap(&s[k],&s[strlen(s)-k+n-1]);
			printf("%s\n",s);
		}
		else
			{
				printf("BIGGEST\n");
			}
	}
	return 0;
}
