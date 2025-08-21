#include<stdio.h>
void nhapSo (int *n){
	printf("nhap so phan tu cua mang: ");
	scanf("%d",n);
}

void scanfArray (int arr[],int n){
	for(int i=0;i<n;i++){
		printf("nhap gia tri phan tu thu %d cua mang: ",i);
		scanf("%d",&arr[i]);
	}
}

void printfArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}

void DaoNguocArray(int arr[],int n){
	for (int i=0,j=n-1;i<j;i++,j--){
		int tmp=arr[i];
		arr[i]=arr[j];
		arr[j]=tmp;
	}
}

int main(){
	int t;
	nhapSo(&t);
	int phap[t];
	scanfArray(phap,t);
	DaoNguocArray(phap,t);
	printfArray(phap,t);
	return 0;
}
