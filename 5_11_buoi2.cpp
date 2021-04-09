#include <stdio.h>
int main()
{ 
	char s[15], a[15];
	int c=0, k=0;
	scanf("%s", s);
	for (int i=strlen(s-1); i>=0; i--){
		c= c*10 + s[i]-'0';
	}
	while(c>0){
		k= c %10;
		a[i] = '0' + k;
		c = c/10;
	}
	printd("%s", a);
}
