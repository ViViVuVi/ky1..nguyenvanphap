#include<stdio.h>
#include "DEMO.h" //tai su dung ma nguon DEMO.h luu y nhay kep ""

int tongChuSo(int n){
	int tong =0;
	while(n!=0){
		int dv=n%10;
		tong+=dv;
		n/=10;
	}
	return tong;
}

int main(){
	int x;
	printf("nhap mot so nguyen: ");
	scanf("%d",&x);
	
	printf("tong cua cac chu so trong %d la: %d",x,tongChuSo(x));
	return 0;
}
