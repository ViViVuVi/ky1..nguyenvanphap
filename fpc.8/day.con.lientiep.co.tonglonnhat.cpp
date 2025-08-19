#include<stdio.h>

int main(){
	int n;
	printf("nhap so gia tri trong mang: ");
	scanf("%d",&n);
	
	int phap[n];
	for(int i=0;i<n;i++){
		printf("nhap gia thi thu phap[%d]: ",i);
		scanf("%d",&phap[i]);
	}
	
	int max_ending_here=phap[0];// tong lon nhat ket thuc tai phan tu hien tai
	int max_so_far=phap[0]; //tong lon nhat tim duoc cho den hien tai
	int start=0,end=0,temp=0;
	
	for(int i=1;i<n;i++){
		if(phap[i]>max_ending_here+phap[i]){
			max_ending_here=phap[i];
			temp=i;//bat dau day moi.
		}else{
			max_ending_here += phap[i];
		}
		
		if(max_ending_here>max_so_far){
			max_so_far=max_ending_here;
			start=temp;
			end=i;
		}
	}	
	printf("tong lon nhat: %d\n", max_so_far);
	printf("day con lien tiep co tong lon nhat: \n");
	for(int i=start;i<=end;i++){
		printf("%d\t",phap[i]);
	}
	
}
