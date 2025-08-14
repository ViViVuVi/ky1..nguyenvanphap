#include<stdio.h>

int main(){
	int n;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	int phap[n];
	
	for(int i=0;i<n;i++){
		printf("hay nhap gia tri phan tu thu %d: ",i);
		scanf("%d",&phap[i]);
	}
	int x,dem=0;
	printf("hay nhap mot gia tri x la: ");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++){
		if(x==phap[i]){
			dem++;
		}
	}
	if(dem!=0){
		printf("gia tri x ban nhap ton tai %d lan trong mang.\n",dem);
	}else{
		printf("gia tri x ban nhap khong ton tai trong mang.\n");
	}
}
