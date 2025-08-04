#include <stdio.h>
#include <cmath>

int main(){
	float a,b,c,deta,cb2,x,x1,x2;
	
	printf("hay nhap gia tri a:\t");
	scanf("%f",&a);
	
	printf("hay nhap gia tri b:\t");
	scanf("%f",&b);
	
	printf("hay nhap gia tri c:\t");
	scanf("%f",&c);
	
	if(a==0){
		if(b!=0){
		
		x=-c/b;
		
		printf("phuong trinh co nghiem la: x= %.2f\n",x);
	}else{
			if(c!=0){
				printf("khong ton tai gia tri cua x.\n");	
			}else{
				printf("gia tri cua x la tat ca cac so.\n");
			}
		}
	}else{
		deta=b*b-4*a*c;
		if(deta<0){
			printf("phuong trinh vo nghiem.\n");
		}else{
			if(deta==0){
				printf("phuong trinh co nghiem kep: x1=x2=%.2f",-b/(2*a));
			}else{
				cb2=sqrt(deta);
				x1=(-b-cb2)/(2*a);
				x2=(-b+cb2)/(2*a);
				printf("phuong trinh co nghiem x1=%.2f\n",x1);
				printf("phuong trinh co nghiem x2=%.2f",x2);
			}
		}
	}
}
