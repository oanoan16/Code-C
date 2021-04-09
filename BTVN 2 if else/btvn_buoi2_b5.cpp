#include <stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	if (n==0) printf ("1");
	else
	{
		if (n==2) printf("6");
		else 
		{
			switch(n%4)
			{
				case 0: { printf ("6"); } break;
				case 1: { printf ("8"); } break;
				case 2: { printf ("4"); } break;
				case 3: { printf ("2"); } break;
				
			}
		}
		
	}
} 
