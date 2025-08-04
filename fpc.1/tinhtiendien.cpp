#include <stdio.h>

int main(){
	
	float x,y;
	
	printf("nhap so dien da dung: \t");
	scanf("%f",&x);
	
	if(x<=50){
		y=x*1678;
		printf("so tien dien cua ban la: %.2f\tdong.",y);
	}else{
		if(x<=100){
			y=50*1678+(x-50)*1734;
			printf("so tien dien cua ban la: %.2f\tdong.",y);
		}else{
			if(x<=200){
				y=50*1678+50*1734+(x-100)*2014;
				printf("so tien dien cua ban la: %.2f\tdong.",y);
			}else{
					y=50*1678+50*1734+100*2014+(x-200)*2536;
					printf("so tien dien cua ban la: %.2f\tdong.",y);
			}
		}
	}
}
