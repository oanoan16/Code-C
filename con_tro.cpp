#include <stdio.h>
#include <string.h>
int main()
{
// &a= dia chi
//	int a;
//	scanf("%d",&a);
//	printf("%x\n",&a);
////	int *tenbien
//	int *b=&a; // gia tri trong b la dia chi cua a
//	printf("%d",*b);
//	
	int s[100];
//	printf("%d\n",&s[0]);
//	printf("%d",s);

	// s==&s[0] la dia chi cua s[0]
	//*(s+1) la gia tri o dau tien
	
//	s[0]=1; s[1]=2; s[2]=3; s[3]=4; s[4]=5;
//	printf("%d\n",*s);
//	printf("%d\n",*(s+1));
//	printf("%d\n",*(s+2));	

	for (int i=1; i<=5; i++)
		scanf("%d",(s+i));
	for (int i=1; i<=5; i++)
		printf("%d\n",*(s+i));
	return 0;
}

