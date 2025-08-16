#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d trong mang: ",i);
		scanf("%d",&phap[i]);
	}
	
	int max=phap[0];
	for(int i=1;i<n;i++){
		if(phap[i]>max){
			max=phap[i];
		}
	}
	
	int min=phap[0];
	for(int i=1;i<n;i++){
		if(phap[i]<min){
			min=phap[i];
		}
	}
	
	int x;
	if(abs(max)>abs(min)){
		x=abs(max);
	}else{
		x=abs(min);
	}
	
	printf("doan tu [-%d,%d] la chua tat ca cac gia tri trong mang.\n",x,x);
}
