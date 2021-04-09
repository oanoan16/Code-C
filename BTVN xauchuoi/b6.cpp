#include <stdio.h>
#include <string.h>
int count = 0;
int  a1[256], a2[256];
// chen chu so 0
void insert ( char s1[], char s2[])
{
	int n = strlen(s1);
	int m = strlen(s2);
	int maxlen = n;
	if (  maxlen < m  ) maxlen = m;
	for (int i = maxlen+1; i >= 0; i--)
	{
		if (i >= (maxlen-n+1))
			s1[i] = s1[i-(maxlen-n +1 )];
		else
			s1[i] = 48;
		if (i >= (maxlen-m+1))
			s2[i] = s2[i-(maxlen-m +1 )];
		else
			s2[i] = 48;
	}
}

// Ham doi cho
void swap (char *a, char *b)
{
	char tmp = *a;
	*a=*b;
	*b = tmp;
}

// So sanh doi cho 2 xau
void swapstr ( char s1[], char s2[])
{
	char temp[256];
	if ( strcmp(s1,s2)<0 )
	{
		for (int i = 0; i < strlen(s1); i++)
			swap(&s1[i],&s2[i]);	
	}
	else 
		if (strcmp(s1,s2) == 0)
			count++;
}

// cong tru 
void xuli( char s1[], char s2[])
{
	int d = 0, e = 0,a = 0,b = 0;
	for ( int i = strlen(s1)-1; i >= 0; i--)
	{
		if( d+s1[i]+s2[i]-48*2 >= 10 )
		{
			a = d+s1[i]+s2[i]-48*2-10;
			d = 1;
		}
		else 
		{	
			a = d+s1[i]+s2[i]-48*2;
			d = 0;
		}
		a1[i] = a;
		if ( s1[i]-s2[i]-e<0 )
		{
			b = 10+s1[i] -s2[i]-e;
			e = 1;
		}
		else 
		{	b = s1[i]-s2[i] -e;
			e = 0;
		}
		a2[i] = b;					
	}
}

int main()
{
    char s1[100],s2[100];
	gets(s1);
	gets(s2);	
	int n = strlen(s1);
	int m = strlen(s2);
	insert(s1,s2);
	swapstr(s1,s2);
	xuli(s1,s2);
	int x = strlen(s1);
	for (int i = 0; i < x-1 ; i++)
	{
		if ( a1[i] != 0  )
		{
			for (int j = i; j < x; j++)
				printf("%d",a1[j]);
			break;
		}
	}
	printf("\n");
	if (count != 0 ) printf("%c",'0');
	else 
	{
		if (n < m ) 
			printf("-"); 
		for (int i = 0; i < x-1 ; i++)
		{
			if (a2[i] == 0 && a2[i+1] != 0)
			{
				for (int j = i+1; j < x; j++)
					printf("%d",a2[j]);
				break;
			}
		}
	}
	return 0;
}

