#include <stdio.h>
#include <iostream>
#include <math.h>
#define Pi 3.14

int main()
{   
    //1.	In ra dòng chu "SayHelloToISP." 
    {    
        printf("SayHelloToISP\n");
    }
    
    //2.	Nhap gio, phut ,giay sau do xuat ra dung dang chuan
    { int hh,mm,ss;
	  printf ("Nhap gio, phut, giay:");
	  scanf  ("%d %d %d",&hh,&mm,&ss);
	  printf ("%d:%d:%d\n",hh,mm,ss);
	}
	
	//3.    Nhap ban kinh hinh tron, tinh chu vi, dien tich
	{
      float r;
      printf ("Nhap ban kinh:");
      scanf  ("%f",&r);
      printf("Chu vi=%g    Dien tich=%g\n",2*Pi*r,Pi*r*r);
    }
    
    //4.    Tinh dien tich tam giac biet do dai 3 canh dung cong thuc Heron
    {
    	float a,b,c,S,P;
    	printf ("Nhap do dai 3 canh:");
    	scanf  ("%f %f %f",&a,&b,&c);
    	if (a+b>c && b+c>a && c+a>b)
    	  { P=(a+b+c)/2;
    	    S=sqrt(P*(P-a)*(P-b)*(P-c));
    	    printf("Dien tich=%.2f\n",S);
    	  }
    	else printf ("Khong phai do dai 3 canh tam giac\n");
    }
    	  	
    //5. Nhap 2 bien nguyen a,b hoan doi gia tri 2 bien va in ra man hinh  
   { 
         int a,b,c;
         printf ("a="); scanf ("%d",&a);
         printf ("b="); scanf ("%d",&b);
         c=a;
         a=b;
         b=c;
         printf ("a=%d   b=%d",a,b);
    }  
	  
}	 
