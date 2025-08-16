#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("hay nhap mot so nguyen: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("hay gia tri thu %d trong mang: ",i);
		scanf("%d",&phap[i]);
	}
	
	int x;
	printf("hay nhap mot so nguyen x la: ");
	scanf("%d",&x);
	
	int gan_x=abs(x-phap[0]);
	for(int i=1;i<n;i++){
		if(abs(x-phap[i])<gan_x){
			gan_x=abs(x-phap[i]);
		}
	}
	
	for(int i=0;i<n;i++){
		if(abs(x-phap[i])==gan_x){
			printf("vi tri thu %d trong mang co gia tri %d la gan voi x=%d nhat.\n",i,phap[i],x);
		}
	}
	
}
