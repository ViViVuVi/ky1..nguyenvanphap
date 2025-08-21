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

void bubble_sort (int arr[],int n){
	for(int i=0;i<n;i++){
		int swapped=0;//co kiem tra co doi cho hay khong.
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				//doi cho
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				swapped=1;
			}
		}
		if(swapped==0)break; //neu khong doi cho nao. !swapped
	}
}

int main(){
	int t;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&t);
	
	int phap[t];
	
	scanfArray(phap,t);
	bubble_sort(phap,t);
	printfArray(phap,t);
	
}
