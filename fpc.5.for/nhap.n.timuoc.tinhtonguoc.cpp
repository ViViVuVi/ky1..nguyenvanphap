#include<stdio.h>

int main(){
	int n;
	int y=1,sum=0;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	for(y=1;y<=n;y++){
		if(n%y==0){
			printf("%d la uoc cua %d\n",y,n);
			sum=sum+y;
		}	
	}
	printf("tong cac uoc cua %d la: %d\n",n,sum);
}
