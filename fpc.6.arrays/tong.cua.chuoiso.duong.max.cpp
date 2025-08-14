#include<stdio.h>

int main(){
	int n;
	printf("hay nhap mot so nguyen duong: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("hay nhap gia tri thu %d cua mang: ",i);
		scanf("%d",&phap[i]);
	}
	//kiem tra mang co toan so am.
	int solanam=0;
	for(int i=0;i<n;i++){
		if(phap[i]<=0){
			solanam++;
		}
	}
	
	if(solanam==n){
		printf("mang khong co gia tri duong.\n");
	}else{
		
				int tong_duong_max=0,tong=0,dem=0;
			
			for(int i=0;i<n;i++){
				if(phap[i]>0){
					tong=tong+phap[i];
					dem++;
				}else{
					if(tong>tong_duong_max){
						tong_duong_max=tong;
					}
					tong=0;
					dem=0;
				}
			}
			
			if(dem==n){
				printf("toan bo cac gia tri trong mang deu la so duong.\ntong cua cac gia tri trong mang la: %d\n",tong);
			}else{
				printf("chuoi so duong co tong lon nhat la: %d",tong_duong_max);
			}
		
	}
	
	
}
