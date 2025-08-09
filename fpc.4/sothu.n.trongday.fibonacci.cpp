#include<stdio.h>

int main(){
	int n;
	int f0=0,f1=1,y=3;	//fo vitri y1; f1 vitriy2
	int fy;
	printf("hay nhap mot so nguyen n: ");
	scanf("%d",&n);
	while(y<=n){
		fy=f0+f1;
		f0=f1;
		f1=fy;
		y++;
	}
	printf("so thu %d trong day FIbonashi la: %d",n,fy);
}
