#include<stdio.h>

int main(){
	int tien, soto500=0, soto200=0, soto100=0, soto50=0, soto20=0, soto10=0;
	
	printf("hay nhap so tien can rut (don vi nghin dong): ");
	scanf("%d",&tien);
	
	if(tien<=0||tien%10!=0){
		printf("so tien khong hop le. phai la boi so cua 10.\n");
		return 0;
	}
	
	soto500=tien/500;
	tien%=500;
	
	soto200=tien/200;
	tien%=200;
	
	soto100=tien/100;
	tien%=100;
	
	soto50=tien/50;
	tien%=50;
	
	soto20=tien/20;
	tien%=20;
	
	soto10=tien/10;
	
	printf("so luong cac to tien can tra la: \n");
	if(soto500>0) printf("menh gia 500k: %d to.\n",soto500);
	if(soto200>0) printf("menh gia 200k: %d to.\n",soto200);
	if(soto100>0) printf("menh gia 100k: %d to.\n",soto100);
	if(soto50>0) printf("menh gia 50k: %d to.\n",soto50);
	if(soto20>0) printf("menh gia 20k: %d to.\n",soto20);
	if(soto10>0) printf("menh gia 500k: %d to.\n",soto10);
	
	return 0;
	
}
