#include<stdio.h>

int main(){
	int n,y=1;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	int count=0;
	while(y<=n){
		if(n%y==0){
			
			count++;
		}
		y++;
	}
	if(count==2){
		printf("day la mot so nguyen to.\n");
	}else{
		printf("day khong phai la so nguyen to.\n");
	}
	
}
