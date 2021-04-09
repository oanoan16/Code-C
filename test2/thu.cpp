#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare( const void*a, const void *b)
{
	return ( *(int*)a - *(int*)b );
}
int main()
{ int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",compare(&a,&b));
	printf("%d %d",a,b);


	return 0;
}

