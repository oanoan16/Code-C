#include <stdio.h>
int main()
{ int a,b,i;
   float c;
   printf ( "a =") ;
   scanf( "%d",&a);
   printf ("b =") ;
   scanf("%d",&b);
   printf ("a+b = %d\n",a+b);
   c=0;   
   for (i=1; i<=a ; i=i+1 )
   { c=c+ i;
   }
   printf ("c=%g",c);
   return 0;
   
}


