#include <stdio.h>

int main(){
	int n,y=0;
	printf("hay nhap mot so nguyen duong n: ");
	scanf("%d",&n);
	
	while(y<n){
		if(y%2!=0){
			printf("%d\n",y);
		}
		y++;
	}
}
