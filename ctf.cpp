#include <stdio.h>
#include <string.h>
int main()
{
	for (long long a=1; a<=1e9; a++ )
		if ((a % 54750 == 26981) && (a % 99627 == 79040) &&(a % 84339== 77510))
		printf("%lld ",a);
	return 0;
}

