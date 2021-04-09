#include <stdio.h>
#define t 1500
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	switch (n)
	{	case 1:{ printf("January\n"); break;}
		case 2:{printf("February\n"); break;}
		case 3:{printf("March\n");    break;}
		case 4:{printf("April\n");    break;}
		case 5:{printf("May\n");	  break;}
		case 6:{printf("June\n");	  break;}
		case 7:{printf("July\n");	  break;}
		case 8:{printf("August\n");	  break;}
		case 9:{printf("September\n");break;}
		case 10:{printf("October\n"); break;}
		case 11:{printf("November\n");break;}
		case 12:{printf("December\n");break;}
	}
		if ((n==1) || (n==3) ||  (n==5) ||  (n==7) ||  (n==8) ||  (n==10) ||  (n==12)) 
		{	
			printf ("%d",t*31);
		}
		else 
		{	
			if ((n==4) || (n==6) ||  (n==9) ||  (n==11)) 
			{	
				printf ("%d", t*30);
			}
			else 
			{ 
				if (n==2)
				{
					if (((m%4==0) && (m%100!=0)) || (m%400==0))
				printf("%d",t*29);
				else printf("%d",t*28);
				}
			}
		}
}			
