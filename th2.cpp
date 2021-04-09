#include <bits/stdc++.h>
//#include <string.h>
//#include <iostream>
//#include <stdlib.h>
char map[6][6];
void Swap ( char *a, char *b )
{
	char 	temp = *a ;
			*a = *b ;
			*b= temp ;
}
int main()
{	
	char s[10][10];
	s[1][1]='1'; s[1][2]='2';
	Swap(&s[1][1] ,  &s[1][2]);
	printf("%c %c", s[1][1], s[1][2]);
	return 0;
}
