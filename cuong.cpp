#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,x,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	if (a==0)
	{
		if (b==0)
		{
			if (c==0) printf("pt vo so nghiem");
			else printf("pt vo nghiem");
	    }
		else printf("pt có nghiem%f",x=-c/b);
	}
	else
    {    
    	d=b*b-4*a*c;
    	if (d>0)  
		{
			printf ("pt co 2 nghiem phan biet %.1f %.1f",x1=(-b + sqrt(d))/(2*a),  x2=(-b - sqrt(d))/(2*a));		
		}
    	else 
		{
			if (d==0) 
			{
			printf ("pt co nghiem kep %.1f",x1=-b/(2*a));
			}
    		else 
			{
				printf ("pt khong co nghiem");
			}
		}
	}	
}
