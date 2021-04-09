#include <stdio.h>
#include <string.h>
int main()
{
	char s[40], s1[10]={0};  
	int j,x,b;
	scanf("%d",&x);
	for (int j=1; j<=x; j++)
	{
		int a[10]={0};
		scanf("%d",&b);
		scanf("%s",s);
		fflush(stdin);
		for (int i=0; i<38; i++)
		{
			if (s[i]=='T' && s[i+1]=='T'&& s[i+2]=='T') a[0]++;
			if (s[i]=='T' && s[i+1]=='T'&& s[i+2]=='H') a[1]++;
			if (s[i]=='T' && s[i+1]=='H'&& s[i+2]=='T') a[2]++;
			if (s[i]=='T' && s[i+1]=='H'&& s[i+2]=='H') a[3]++;
			if (s[i]=='H' && s[i+1]=='T'&& s[i+2]=='T') a[4]++;
			if (s[i]=='H' && s[i+1]=='T'&& s[i+2]=='H') a[5]++;
			if (s[i]=='H' && s[i+1]=='H'&& s[i+2]=='T') a[6]++;
			if (s[i]=='H' && s[i+1]=='H'&& s[i+2]=='H') a[7]++;
		}	
		printf("%d ",j);
	  	for (int i=0; i<8; i++)
			printf("%d ",a[i]);
			printf("\n");
	}
	return 0;
}

