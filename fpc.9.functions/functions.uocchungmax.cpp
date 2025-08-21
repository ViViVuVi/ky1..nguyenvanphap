#include<stdio.h>


int uocChungMax(int a,int b){
	int min=(a<b)?a:b;
	int max;
	for(int i=1;i<=min;i++){
		if (a%i==0&&b%i==0){
			max=i;
		}
	}
	return max;
}

int main(){
	int x,y;
	printf("nhap so thu nhat: ");
	scanf("%d",&x);
	printf("nhap so thu hai: ");
	scanf("%d",&y);
	
	printf("uon chung max cua %d va %d la: %d",x,y, uocChungMax(x,y));
	return 0;
}
