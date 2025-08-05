#include<stdio.h>

int main(){
	int d,m,y,dim;
	
	printf("hay nhap ngay: ");
	scanf("%d",&d);
	
	printf("hay nhap thang: ");
	scanf("%d",&m);
	
	printf("hay nhap nam: ");
	scanf("%d",&y);
	
	
	
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			dim=31;
		case 4: case 6: case 9: case 11:
			dim=30;
		case 2:
			if((y%4==0&&y%100!=0)||(y%400==0)){
				dim=29;
			}else{
				dim=28;
			}
		default:
			printf("thang khong hop le.\n");
			return 0;
	}
	
	if(d<1||d>dim){
		printf("ngay khong hop le.\n");
		return 0;
	}
	
	d=d+1;
	
	if(d>dim){
		d=1;
		m++;
		if(m>12){
			m=1;
			y++;
		}
		printf("ngay ke tiep la: %02d/%02d/%04d\n",d,m,y);
	}else{
		printf("ngay ke tiep la: %02d/%02d/%04d\n",d,m,y);
	}
}
