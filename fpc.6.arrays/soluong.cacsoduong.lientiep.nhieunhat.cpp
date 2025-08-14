#include<stdio.h>

int main(){
	int n;
	printf("hay nhap mot so nguyen duong: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d trong mang: ",i);
		scanf("%d",&phap[i]);
	}
	
	//tim so luong cac so duong lien tieo nhieu nhat.
	 int dem=0,so_lan_max=0;
	 for( int i=0;i<n;i++){
	 	if(phap[i]>0){
	 		dem++;	
		}else{
		 	if(dem>so_lan_max){
		 		so_lan_max=dem;
			}
			dem=0;
		 }
	 }
	 if(dem==n){
	 		printf("toan bo %d gia tri trong mang deu la so duong.\n",n);
	}else{
		 	printf("so luong cac so duong lien tiep nhieu nhat la: %d\n",so_lan_max);
	}
	
}
