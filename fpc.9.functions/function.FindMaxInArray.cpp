#include<stdio.h>
void scanfArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d cua mang: ",i);
		scanf("%d",&arr[i]);
	}
}

int max_Mang(int arr[],int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}


int main (){
	int t;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&t);
	
	int phap[t];
	scanfArray(phap,t);
	
	printf("gia tri lon nhat cua mang la: %d",max_Mang(phap,t));
}
