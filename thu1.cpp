/*nhap tu ban phim mang so nguyen gom n phan tu:
1. tinh trung binh cong cac so le o vi tri chan
2. tim so lon nhat trong mang vua nhap
3. tim vi tri cac so nho nhat trong mang
4. dem cac so nho nhat trong mang
5. dem cac so chinh phuong trong mang
6. hien thi cac so nguyen to co trong mang
7. xoa cac phan tu am co trong mang
8. sap xep mang da nhap theo thu tu tang dan*/
#include<stdio.h>
#include<math.h>

const int MAX = 100000;


int main(){
	int array[MAX];
    int n;
	printf("Nhap so luong phan tu mang n= ");
	scanf("%d", &n);    
    //nhap vao phan tu mang
    for(int i=0; i<n; i++){
    	printf("\nNhap a[%d]= ", i);
    	scanf("%d", &array[i]);
	}
	//1. tinh trung binh cong cac so le o vi tri chan
	//vi tri chan = chi so le.
	int sum=0;
    int count=0;
    
    for(int i=0; i<n; i+=2){
    	if(array[i]%2==1){
    		count++;
    		sum+=array[i];
		}
	}
	float c=(float)sum/count;
	printf("\nTrung binh cong = %.3f", c);
    return 0;
}
