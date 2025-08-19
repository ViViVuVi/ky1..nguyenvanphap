#include<stdio.h>

int main(){
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri thu phap[%d]: ",i);
		scanf("%d",&phap[i]);
	}
	
	int arr[n];
	int m=0;
	
	for(int i=0;i<n;i++){
		int trung=0; //tao co
		for(int j=0;j<m;j++){
			if(phap[i]==arr[j]){
			trung=1;  //gan co.khi dieu kien dung
			break;
			}
		}
		
		if(trung==0){
			arr[m]=phap[i];
			m++;
		}
	}
	printf("mang ket qua da loai di cac phan tu trung lap:\n");
	for(int i=0;i<m;i++){
		printf("%d\t",arr[i]);
	}
}
