#include <stdio.h>
#include <string.h>
void swap( int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int s,n,a[100000],b[100000];
	scanf("%d%d",&s,&n);
	for ( int i = 1; i <= n ; i++ ) 
		scanf( "%d%d" , &a[i] , &b[i] );
	for (int i = 1 ; i <= n ; i++)
		for (int j = i+1 ; j <= n; j++)
		{
			if ( a[i] > a[j] )
			{
				swap( &a[i],&a[j]) ;
				swap( &b[i],&b[j]) ;
			}
		}
	for (int i = 1 ; i <= n ; i++)
	{
		if ( s > a[i] )
		{
			s = s + b[i] ;
		}
		else
		{
			printf( "NO" );
			break;
		}
	}
	if ( s > a[n] ) printf( "YES" ) ;
	return 0;
}

