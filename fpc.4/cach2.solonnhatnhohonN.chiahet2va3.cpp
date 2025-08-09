#include<stdio.h>

int main(){
	int n,y=0,max;
	
	printf("hay nhap mot so nguyen n: ");
	scanf("%d",&n);
	
	while(y<n){
		if((y%2==0)&&(y%3==0)){
			max=y;
		}
		
		y++;
	}
	printf("so lon nhat nho hon %d va chia het cho 2 va 3 la: %d", n ,max);
}
