#include<stdio.h>

int main(){
	int a;
	int b;
	int y=1,uocmax=0,z=1,boimin=0;
	printf("hay nhap so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("hay nhap so nguyen thu hai: ");
	scanf("%d",&b);
	
	for(y=1;(y<a||y<b);y++){
		if((a%y==0)&&(b%y==0)){
			uocmax=y;
		}
	}
	printf("uoc chung lon nhat cua %d va %d la: %d\n",a,b,uocmax);
	
	for(z=1;1==1;z++){
		if((z%a==0)&&(z%b==0)){
			boimin=z;
			break;
		}
	}
	printf("boi chung nho nhat cua %d va %d la: %d\n",a,b,boimin);
}
