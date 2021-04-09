#include <stdio.h>
#include <math.h>
int main()
{	
	int G,Y;
	float a,b,c,denta,x1,x2;	
	scanf("%d%d",&G,&Y);
	a=1;
	b=-((float)G+4)/2;
	c=(float)G+(float)Y;
	denta=b*b-4*a*c;
   	if (denta==0)      
    { 	
		printf ("%g %g",-b/(2*a),-b/(2*a)) ;
	}
	else 
 	{ 
		if (denta>0)
 		{   
 			x1=(-b-sqrt(denta))/(2*a);
 			x2=(-b+sqrt(denta))/(2*a);
 			if ((x1-(int)x1==0) && (x2-(int)x2==0)) 
 		    printf("%g %g",x1,x2);
 		    else printf ("Khong co kich thuoc phu hop");
		}
		else printf ("Khong co kich thuoc phu hop");
	}
}
