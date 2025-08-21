#include<stdio.h>
#include<math.h>


int tinh_pow (int a, int b){
	int S=pow(a,b);//cach tinh a mu b
	return S;
}

int main(){
	int x,y;
	printf("nhap so thu nhat: ");
	scanf("%d",&x);
	printf("nhap so thu hai: ");
	scanf("%d",&y);
	
	printf("gia tri cua %d power %d la: %d",x,y,tinh_pow(x,y));
}
