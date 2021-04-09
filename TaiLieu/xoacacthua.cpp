#include<iostream>
#include<math.h>
#include<vector>
#include<string.h>
using namespace std;

int main(){
	char str[100];
	gets(str);
	int n=strlen(str);
	//xoa cach dau
	for(int i=0;i<n;i++){
		if(str[i]==' '){
			while(str[i+1]==' '){
				for (int j=i;j<n;j++){
					str[j]=str[j+1];
				}
			}
			if(i==0)
				for (int j=0;j<n;j++)
					str[j]=str[j+1];
		}
	}
	puts(str);
return 0;
}

