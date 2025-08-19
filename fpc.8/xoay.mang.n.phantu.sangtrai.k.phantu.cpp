#include<stdio.h>

int main(){
	int n;
	printf("hay nhap so gia tri trong mang: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri phap[%d]: ",i);
		scanf("%d",&phap[i]);
	}
	
	int k;
	printf("hay nhap mot so nho hon so gia tri trong mang: ");
	scanf("%d",&k);
	
	if(k>n){
		printf("gia tri ban nhap sai.\n");
	}else{
		for(int i=0;i<k;i++){
			int temp=phap[0];
			for(int i=0;i<n-1;i++){
				phap[i]=phap[i+1];
			}
			phap[n-1]=temp;
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d\t",phap[i]);
	}
}
