#include<stdio.h>
#include<stdlib.h>	//thu vien chua phep tinh tri so nguyen int		abs()
// #include<math.h>		thu vien chua phep tinh tri so thuc float or double		fabs()

int main(){
	int a,b;
	
	printf("nhap so a: ");
	scanf("%d",&a);
	
	printf("nhap so b: ");
	scanf("%d",&b);
	
	if(abs(a-10)==abs(b-10)){
		printf("bang nhau.\n");
	}else{
		if(abs(a-10)>abs(b-10)){
			printf("so gan 10 hon la: %d",b);
		}else{
			printf("so gan 10 hon la: %d",a);
		}
	}
}
