#include <stdio.h>
#include <string.h>
int main()
{
	char s[256];
	int count=0;
	gets(s);
	if ( s[0] == '4') printf ("NO");
	else 
	{
		for (int i = 0 ; i<strlen(s); i++)
	 	{
				if ( s[i] != '1'  && s[i] != '4' ) count = -1;
				else
				{
					for ( int j = 0 ; j < strlen(s)-2 ; j++ )
					if ( s[j] == '4' && s[j+1] == '4' && s[j+2] == '4')
						count = -1;
				}
		}
		if ( count == 0 )
			printf ("YES");
		else 
			printf ("NO");
	}
	return 0;
}

