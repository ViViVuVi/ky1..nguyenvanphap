#include<stdio.h>

int main(){
	int tienhang;
	printf("nhap tong tien hang (don vi nghin): ");
	scanf("%d",&tienhang);
	
	float discount;
	char dv[]="nghin dong";
	
	if(tienhang<200){
		discount=0;
	}else{
		if(tienhang<500){
			discount=tienhang*0.05;
		}else{
			discount=tienhang*0.1;
		}
	}
	printf("so tien can tra la: %.2f %s.",tienhang-discount,dv);
}
