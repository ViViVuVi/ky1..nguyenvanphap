#include<stdio.h>

int main(){
	int n;
	int f0=0,f1=1,y=3;
	int fy;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	while(fy<n){
		
		fy=f0+f1;
		f0=f1;
		f1=fy;
		y++;
	}
	printf("so tiem can duoi voi %d va thuoc day fibonacci la: %d",n,f0);
}
