#include <stdio.h>
#include <math.h>
int main()
{
{  /* Phuong trinh bac nhat*/
   int a,b;
   float x;
   scanf("%d%d",&a,&b);
   x=(float)(-b)/(float)a;
   printf("Phuong trinh co nghiem:%.1f",x);
}
{   /*Phuong trinh bac 2*/
	float a,b,c,denta,x1,x2;
	scanf ("%f%f%f",&a,&b,&c);
	if (a==0) 
	{
		if (b==0)
		{
			if (c==0) printf ("Phuong trinh co vo so nghiem");
			else printf ("Phuong trinh vo nghiem");
		}
   		else printf ("Phuong trinh co 1 nghiem:%.1f",-c/b);
	}
    else 
   	{
		denta=b*b-4*a*c;
   		if (denta==0)      
    	{ 	
			printf ("Phuong trinh co nghiem kep:%.1f",-b/(2*a)) ;
		}
		else 
 		{ 
			if (denta>0)
 			{
				x1=(-b-sqrt(denta))/(2*a);
 		    	x2=(-b+sqrt(denta))/(2*a);
 		    	printf("Phuong trinh co 2 nghiem:%.1f %.1f",x1,x2);
			}
			else printf ("Phuong trinh vo nghiem");
		}
	}
}
{	/*He phuong trinh bac nhat 2 an*/
	float a1,b1,c1,a2,b2,c2,d;	
	scanf ("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
	d=a1*b2-a2*b1;
	if (d==0)
	{ 
		if (c1==c2) printf ("He phuong trinh vo so nghiem");
		else printf ("He phuong trinh vo nghiem");
	}	
	else printf ("He phuong trinh co nghiem:%.4f %.4f",(-c1*b2+c2*b1)/d,(-a1*c2+a2*c1)/d);
}
}
	
	
