#include<stdio.h>

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d \t",arr[i]);
	}
}

void scanArray(int arc[],int size){
	for(int i=0;i<size;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&arc[i]);
	}
}

int main(){
	int phap[]={1,3,4,5,9};
	
	printArray(phap,5);//in  mang tren
	
	scanArray(phap,5);//nhap gia tri moi cho mang tren
	
	printArray(phap,5);//ket qua se khac
}
