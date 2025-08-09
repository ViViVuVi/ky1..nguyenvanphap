#include<stdio.h>

int main(){
	int n,y,max;
	
	printf("hay nhap mot so nguyen n: ");
	scanf("%d",&n);
	
	y=(n-1);
	
	while(y>0){
		if((y%2==0)&&(y%3==0)){
			max=y;
			break;
		}
		y--;
	}
	printf("so lon nhat nho hon %d va chia het cho 2 va 3 la: %d", n ,max);
}
