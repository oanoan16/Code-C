#include <stdio.h>
#include <string.h>
int main()
{
	char s[100000];
	int n,x,d,dY,dN,dP,dA;
	scanf("%d",&x);
	for (int i=1; i<=x; i++)
	{
		dY=0; dN=0; dP=0; dA=0;
		scanf("%s",s);
		n=strlen(s);
		for (int i=0; i<n; i++)
		{
			if (s[i]=='Y') dY++;
			if (s[i]=='N') dN++;
			if (s[i]=='P') dP++;
		}
		dA=n-1-dY-dN-dP;
		if (dA>=(n-1)/2) printf("need quorum");
		else 
		{
			if (dY>dN) printf("yes");
			else 
			{
				if (dY<dN) printf("no");
				else printf("tie");	
			}
		}		
	}
	return 0;
}

