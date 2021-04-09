#include <stdio.h>
#include <string.h>
//  cach 1
int main()
{
	char s[256];
	int n,m,j;
	long long a,b;
	gets ( s );
	n = strlen(s);
	m = n%3;
	if ( m != 0 ) m = 3-m;
	for ( int i = n + m + 1 ; i >= 0; i-- )
	{
		if ( i >= m  ) s[i] = s[i-m];
		else s[i]='0';
	}
	int i = 0 ;
	while ( i <= m + n -1 )
	{
		j = 0;
		a=4 ;
		b=0;
		while ( j < 3 )
		{
		 	s[j]=s[i+j];
		 	b = b + (s[j] -48)*a;
		 	a=a/2;
		 	j++;
		}
		printf("%d",b);
		i=i+j;
	}
	return 0;
}


//// Cach 2 cua Phong
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//void ktra(char b[])
//{
//    if (strcmp(b, "000")==0) return printf("0"), (void)0;
//    if (strcmp(b, "001")==0) return printf("1"), (void)0;
//    if (strcmp(b, "010")==0) return printf("2"), (void)0;
//    if (strcmp(b, "011")==0) return printf("3"), (void)0;
//    if (strcmp(b, "100")==0) return printf("4"), (void)0;
//    if (strcmp(b, "101")==0) return printf("5"), (void)0;
//    if (strcmp(b, "110")==0) return printf("6"), (void)0;
//    if (strcmp(b, "111")==0) return printf("7"), (void)0;
//}
//
//char xuli(char s[])
//{
//    int i;
//    char b[100];
//    int n=strlen(s);
//    while (n%3!=0)
//    {
//        for (i=n-1;i>=0;i--)
//        {
//            s[i+1]=s[i];
//        }
//        s[0]='0';
//        n++;
//    }
//    for (i=0;i<n;i+=3)
//    {
//        b[0]=s[i];
//        b[1]=s[i+1];
//        b[2]=s[i+2];
//        b[3]='\0';
//        ktra(b);
//    }
//}
//int main()
//{
//    char s[100];
//    gets(s);
//    xuli(s);
//    return 0;
//}
//	
	



