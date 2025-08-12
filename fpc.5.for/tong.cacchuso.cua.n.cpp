#include<stdio.h>

int main(){
	
	int y=1,dv=0,sum=0;
	int n;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	for(y=1;n!=0;y++){
		dv=n%10;
		sum=sum+dv;
		n/=10; //n=n/10
	}
	printf("tong cac chu so cua so tren la %d.\n",sum);
}
