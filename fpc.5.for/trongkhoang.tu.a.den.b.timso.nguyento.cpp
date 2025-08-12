#include<stdio.h>
#include<math.h>

int songuyento(int n){
	if (n<2) return 0;
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int a,b,y,j=1,dem=0,z=0;
	
	printf("hay nhap so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("hay nhap so nguyen thu hai(lon hon so thu nhat): ");
	scanf("%d",&b);
	

	for(y=a;y<=b;y++){
		if(songuyento(y)){
			z++;
			printf("%d la mot so nguyen to.\n",y);
		}
	}
	
	if(z==0){
		printf("trong khoang hai so tren khong co so nguyen to nao ca.\n");
	}else{
		printf("trong khoang hai so ban nhap co %d so nguyen to.\n",z);
	}
}
