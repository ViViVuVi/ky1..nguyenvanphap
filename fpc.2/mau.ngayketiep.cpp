#include<stdio.h>

	
int namthuan(int y){
		return (y%4==0&&y%100!=0)||(y%400==0);
	}
	
	
int dim(int m, int y){
		switch(m){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				return 31;
			case 4: case 6: case 9: case 11:
				return 30;
			case 2:
				return namthuan(y)?29:28;
			default:
				return 0;
		}
	}
	

int main(){
	int d,m,y;
	
	printf("hay nhap ngay: ");
	scanf("%d",&d);
	
	printf("hay nhap thang: ");
	scanf("%d",&m);
	
	printf("hay nhap nam: ");
	scanf("%d",&y);
	
	int songay = dim(m,y);
	if(songay==0){
		printf("thang khong hop le.\n");
		return 1;
	}
	if(d<1||d>songay){
		printf("ngay khong hop le.\n");
		return 1;
	}
	
	d=d+1;
	
	if(d>songay){
		d=1;
		m++;
		if(m>12){
			m=1;
			y++;
		}
	}
	
	printf("ngay ke tiep la: %02d/%02d/%04d\n",d,m,y);
	
}
