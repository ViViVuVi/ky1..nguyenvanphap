#include<stdio.h>

int main(){
	
	float a,b,x;
	
	printf("hay nhap gia tri a:\t");
	scanf("%f",&a);
	
	printf("hay nhap gia tri b:\t");
	scanf("%f",&b);
	
	
	if(a!=0){
		
		x=-b/a;
		
		printf("x co gia tri la: %.2f\n",x);
	}else{
		if(b!=0){
			printf("khong ton tai gia tri cua x.\n");	
		}else{
			printf("gia tri cua x la tat ca cac so.\n");
		}
	}
	
}
