#include <stdio.h>
int min(int a, int b, int c, int d)
{
	int min;
	min=a; 
	if (min>b) min=b;
	if (min>c) min=c;
	if (min>d) min=d;
	return min;
}
int main()
{
	int a;
	scanf("%d",&a);
	for (int i=0 ; i<a ; i++)
	{
		for (int j=0; j<a; j++)
				printf("%d ",min(i+1,j+1,a-i,a-j));
		printf ("\n");
	}
	return 0;
}

