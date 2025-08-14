#include<stdio.h>

int main(){
	
	int n;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("hay nhap phan tu thu %d: ",i);
		scanf("%d",&phap[i]);
	}
	
	float total=0;
	int dem=0;
	for(int i=0;i<n;i++){
		if((phap[i]%2!=0)&&i%2==0){
		
			total=total+phap[i];
			dem++;
		}
	}
	if(dem==0){
		printf("trong mang khong ton tai so thoa man yeu cau.\n");
	}else{
		printf("trung binh cong cua cac so le o vi tri chan trong mang la: %.1f",total/dem);
	}
}
