#include<stdio.h>

int main(){
	int n,y=1,count=0,m=0,dv;
	printf("hay nhap so nguyen duong: ");
	scanf("%d",&n);
	for(y=1;n!=0;y++){
		m++;
		dv=n%10;
		if(dv%2!=0){
			count++;
			printf("%d la mot so le.\n",dv);
		}else{
			printf("%d la mot so chan.\n",dv);
		}
		n/=10;
		y++;
	}
	if(m==count){
		printf("so ban nhap toan la chu so le.\n");
	}else{
		printf("so ban nhap khong phai toan la chu so le.\n");
	}
}
