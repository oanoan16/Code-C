#include <stdio.h>
#include <string.h>
int main()
{
//	char s[100];
// co 100 phan tu , chi nhap dc 99, phan tu cuoi la '\0'
// ca chuoi %s, 1 phan tu %c
	
	char ten[100];
//	scanf("%s",ten);
//	gets(ten);  //  nhaap ca day nhan dau cach
//	printf("%s",ten);
//	puts(ten); // in ca chuoi ki tu
	
//	scanf("%s",ten);
//	gets(ten);
//	for (int i=strlen(ten)-1 ; i>=0; i--)
//		printf("%c",ten[i]);
//		

	gets(ten); int n;
//	for (int i=0; i<strlen(ten); i++)
//	{
//		if (ten[i]<='Z' && ten[i]>='A') 
//			printf("%c",ten[i]+'a'-'A'); //+32
//		else 
//			printf("%c",ten[i]);
	
	

//kHa bANh  Kha Banh
//	for (int i=0; i<strlen(ten); i++)
//		if (ten[i]<='Z' && ten[i]>='A') ten[i]=ten[i]-32;
//	for (int i=1; i<strlen(ten) ; i++)
//		if (ten[i-1]==' ') ten[i]=ten[i]-32;
//	puts(ten);


// xoa dau cach thua
	n=strlen(ten);
	for (int i=0; i<n; i++)
	{
		if (ten[i]==' ')
		{
			while (ten[i+1]==' ')
			{
				for (int j=i; j<n;j++)
					ten[j]=ten[j+1];
			}
			if ( i==0)
			{
				for (int j=0; j<=n; j++)
					ten[j]=ten[j+1];
			}
		}
	}
	puts(ten);		
	
	
	
	return 0;
}

