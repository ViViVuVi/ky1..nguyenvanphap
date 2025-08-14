#include<stdio.h>

int main(){
	int n;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d: ",i);
		scanf("%d",&phap[i]);
	}
	int min_duong=0;
	for(int i=0;i<n;i++){
		if((phap[i])>0){
			min_duong=phap[i];
		}
		break;
	}
	if(min_duong==0){
		printf("trong mang khong co so duong.\n");
	}else{
		for(int i=0;i<n;i++){
			if(phap[i]<min_duong&&phap[i]>0){
				min_duong=phap[i];
			}
		}
		printf("so duong nho nhat trong mang la: %d",min_duong);
	}
	
}
