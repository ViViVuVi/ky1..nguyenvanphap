#include<stdio.h>

int main(){
	int n;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("hay nhap gia tri thu %d la: ",i);
		scanf("%d",&phap[i]);
	}
	int le;
	for(int i=0;i<n;i++){
		if(phap[i]%2!=0){
			le=phap[i];
		}
	}
	printf("so le cuoi cung trong mang tren la: %d",le);
}
