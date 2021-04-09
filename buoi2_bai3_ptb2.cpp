#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,denta,x1,x2;
	scanf ("%f%f%f",&a,&b,&c);
	if (a==0) 
	{
   		printf ("Phuong trinh co 1 nghiem:%.1f",-c/b);
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
