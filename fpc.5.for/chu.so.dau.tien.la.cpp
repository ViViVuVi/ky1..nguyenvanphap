#include<stdio.h>

int main(){
	int n, dv=0,y=1;
	printf("nhap mot so nguyen duong: ");
	scanf("%d",&n);
	
	for(y=1;n!=0;y++){
		dv=n%10;
		n/=10;
	}
	printf("chu so dau tien cua so tren la: %d",dv);
}
