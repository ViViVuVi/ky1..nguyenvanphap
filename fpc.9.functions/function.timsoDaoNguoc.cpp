#include<stdio.h>

int soDaoNguoc (int n){
	int dn=0;
	for(int i=0;n!=0;i++){
		int dv =n%10;
		dn=dn*10+dv;
		n/=10;
	}
	return dn;
}

int main(){
	int x;
	printf("nhap mot so: ");
	scanf("%d",&x);
	printf("so dao nguoc cua so %d la %d\n",x,soDaoNguoc(x));
	
}
