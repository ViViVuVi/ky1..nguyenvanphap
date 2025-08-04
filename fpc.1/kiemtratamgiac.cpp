#include<stdio.h>

int main(){
	
	float a,b,c;
	
	printf("nhap chieu dai a: \t");
	scanf("%f",&a);
	
	printf("nhap chieu dai b: \t");
	scanf("%f",&b);
	
	printf("nhap chieu dai a: \t");
	scanf("%f",&c);
	
	if((a+b)>c){
		printf("day la mot tam giac");
	}else{
		if((b+c)>a){
			printf("day la mot tam giac");
		}else{
			if((a+c)>b){
				printf("day la mot tam giac");
			}else{
				printf("day khong phai la mot tam giac");
			}
		}
	}
}
