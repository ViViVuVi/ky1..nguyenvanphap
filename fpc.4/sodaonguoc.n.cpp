#include<stdio.h>

int main(){
	
	int n;
	int nd=0;
	printf("nhap n: ");
	scanf("%d",&n);
	

	while(n!=0){
		int dv=n%10;
		nd=nd*10+dv;
		n/=10;	// giong voi n=n/10;
	}
	printf("so dao nguoc cua %d la: %d",n,nd);
}
