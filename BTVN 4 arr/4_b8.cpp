#include <stdio.h>
//	{1,1,3,4,5,9,7,16,9,…} 
//	V?i m?i b? test, ??a ra trên m?t dòng giá tr? ? v? trí k c?a dãy. 
//	Ví d?: 


//int giatri(int x)
//{
//	int a,b,i,s;
//	a=1;	b=3;	i=4;	s=0;
//	while (i<=x)
//	{
//		s=a+b;
//		a=s;
//		b+=2;
//		i+=2;
//	}
//	return s;
//}
int main()
{
	int a[100000];
	int n,dem,max,keymax,j;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for (int i=0; i<n; i++)
	{
		if (a[i]<3) printf ("%d ",1);
		else 
		{
			if (a[i]%2!=0) printf("%d ",a[i]);
			else printf ("%d ",(a[i]/2)*(a[i]/2));
		}
	}
	return 0;
}

