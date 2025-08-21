#include<stdio.h>

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

void insertion_sort(int arr[],int n){
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		//dich phan tu lon hon key sang phai
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

int main(){
	int t;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&t);
	
	int phap[t];
	
	scanfArray(phap,t);
	insertion_sort(phap,t);
	printfArray(phap,t);
	
}
