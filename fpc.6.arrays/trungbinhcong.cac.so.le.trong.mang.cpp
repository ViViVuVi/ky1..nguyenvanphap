#include<stdio.h>

int main(){
	int n;
	printf("hay nhap so nguyen: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&phap[i]);
	}
	int total=0,dem=0;
	for(int i=0;i<n;i++){
		if(phap[i]%2!=0){
			total=total+phap[i];
			dem++;
		}
	}
	if(dem==0){
		printf("mang khong co so le nao ca.\n");
	}else{
		printf("trung binh cong cac so le trong mang la: %d",total/dem);
	}	
}
