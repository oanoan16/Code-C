#include <stdio.h>
#include <math.h>
int main()
{
//	int a,c;
//	float b,d;
//	scanf("%d%d",&a,&c);
//	scanf("%f%f",&b,&d);	
//	printf("%d %g %d %g ",a,b,c,d);
//	printf("%d %g %10.4f",x,y,z);
//	printf("%g",3.5);
//	------------------
	
//	int a,b;
//	scanf ("%d%d",&a,&b);
//	printf("%d\n",a+b);
//	printf("%d\n",a-b);
//	printf("%d\n",a*b);
//	printf("%.2f",a*1.0/b);
//	return 0;
//----------------
////    int a,b;
////    scanf("%d%d",&a,&b);
////    printf("%d",a%b);
//---------------  

//    int a,b,c;
//    float p,s;
//    scanf("%d%d%d",&a,&b,&c);
//    p=(float)(a+b+c)/2;
//    s=(float)sqrt(p*(p-a)*(p-b)*(p-c));
//    printf("%.3f",s);

	int a,b,c,min,max;
	scanf("%d%d%d",&a,&b,&c);
	max=(a+b+abs(a-b))/2;
	min=(a+b-abs(a-b))/2;
	printf("Max:%d\n",(max+c+abs(max-c))/2);
	printf("Min:%d",(min+c-abs(max-c))/2);
	
	
    
    

}
