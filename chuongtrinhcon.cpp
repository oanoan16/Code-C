#include <stdio.h>
#include <string.h>
#include <math.h>
// chuong trinh con
// * khong co gia tri tra ve void
// * co gia tri tra ve int , float,....
// chuong trinh con cung ten , chi can khac tham so 

//void cmsn(int a,int b, float c)
//{
//	printf("%d",a);
//}
//void cmsn()
//{
//	printf("CMSN");
//}
//void diem( float a )
//{
//	if (a<5) return printf ("kem"), (void)0;
//	if (a<6.5) return printf ("trung binh") , (void)0;
//	if (a<8) return printf ("tien tien"), (void)0;
//	if (a>=8) printf ("gioi");
//}

//int min(int a,int b)
//{
//	if (a<b) return a;
//	return b;
//}

int tcs(int a)
{
	int s=0;
	while (a!=0)
	{
		s=s+a%10;
		a=a/10;
	}
	return s;
}

int ktnt(int n)
{
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return 0;
	return 1;
}

int str(char s[100])
{
	int  i=0;
	while (s[i]!='\0')
	{
		i++;
	}
	return i;
}

int tcs(int *a)  //truyen vao 1 dia chi
{
	int t=0;
	while  (*a)
	{
		t+=(*a)%10;
		*a=(*a)/10;
	}
	return t;
}


void swap( int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
//	float x;
//	cmsn();
//	printf("\n");
//	cmsn(3, 4, 5);

//	scanf("%f",&x);
//	diem(x);
	
//	int a,b,c,d,e;
//	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//	printf("%d",min(min(min(min(a,b),c),d),e));
	
//	int x;
//	scanf("%d",&x);
//	printf("%d",tcs(x));
	
//	for (int i=1; i<=10000; i++)
//		if (ktnt(tcs(i)) && ktnt(i)) printf("%d ",i);

//	char s[100];
//	gets(s);
//	printf("%d",str(s));
//	return 0;
	
	int m,n;
	scanf("%d%d",&m,&n);
	swap(&m,&n);
	printf("%d %d",m,n);
}

