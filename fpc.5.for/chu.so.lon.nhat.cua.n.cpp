#include<stdio.h>

int main(){
	int n,y=1,max=0,dv;
	printf("hay nhap mot so nguyen duong: ");
	scanf("%d",&n);
	for(y=1;n!=0;y++){
		dv=n%10;
		if(dv>max){
			max=dv;
		}
		n/=10;
	}
	printf("chu so lon nhat cua so tren la: %d",max);
}
