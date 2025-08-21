#include<stdio.h>

int tongChuSo(int n){
	int sum=0;
	for(int i=0;n!=0;i++){
		int dv=n%10;
		sum=sum+dv;
		n/=10;
	}
	return sum;
}

int main(){
	int x;
	printf("nhap mot so: ");
	scanf("%d",&x);
	
	printf("tong cac chu so cua %d la %d.\n",x,tongChuSo(x));
	
}
