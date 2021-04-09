#include <stdio.h>
#include <string.h>
// me Ti mua but chi 4 mau
int main()
{
	long long  s1,s2,s3,s4, a[4],b[4]={0}, c=0;
	scanf("%lld%lld%lld%lld",&s1,&s2,&s3,&s4);
	a[0]=s1;
	a[1]=s2;
	a[2]=s3;
	a[3]=s4;
	for (int i=0; i<4; i++)
		for (int j=i+1; j<4 ; j++)
			if (a[j]==a[i]) b[j]--;
	for (int i=0; i<4; i++)
		if (b[i]>=0) c++;
	printf("%lld",4-c);
	return 0;
}

