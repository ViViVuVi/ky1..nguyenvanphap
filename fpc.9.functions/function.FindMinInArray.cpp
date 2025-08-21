#include<stdio.h>

void scanfArray (int arr[],int n){
	for(int i=0;i<n;i++){
		printf("nhap gia tri phan tu thu %d cua mang: ",i);
		scanf("%d",&arr[i]);
	}
}

int min_Array(int arr[],int n){
	int min =arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}

int main(){
	int t;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&t);
	int phap[t];
	scanfArray(phap,t);
	printf("phan tu be nhat cua mang co gia tri la: %d",min_Array(phap,t));
	return 0;
}
