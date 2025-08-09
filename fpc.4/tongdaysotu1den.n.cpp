#include<stdio.h>

int main(){
	int n,tong=0, y=1;
	
	printf("hay nhap mot so nguyen n la: ");
	scanf("%d",&n);
	
	while(y<=n){
		tong=tong+y;
		y++;
	}
	printf("tong cua day so tu 1 den n la: %d",tong);
}
