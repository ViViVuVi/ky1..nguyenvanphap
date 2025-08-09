#include <stdio.h>

int main(){
	int n, sum=0, y=1;
	printf("nhap mot so nguyen n la: ");
	scanf("%d",&n);
	while(y<n){
		if(n%y==0){
			sum=sum+y;
		}
		y++;
	}
	
	if(sum==n){
		printf("so nguyen %d la mot so hoan hao.\n",n);
	}else{
		printf("so nguyen %d la mot so khong hoan hao.\n",n);
	}
}
