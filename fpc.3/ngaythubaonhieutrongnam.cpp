#include<stdio.h>

int main(){
	int d,m,y,cuoithang,thang2,stt;
	
	printf("nhap ngay:\t ");
	scanf("%d",&d);
	
	printf("nhap thang:\t ");
	scanf("%d",&m);
	
	printf("nhap nam:\t ");
	scanf("%d",&y);
	
	//xet so ngay cuoi thang
	if(m==2){
		if((y%4==0&&y%100!=0)||y%400==0){
			thang2=cuoithang=29;
		}else{
			thang2=cuoithang=28;
		}
	}else{
		if(m==4||m==6||m==9||m==11){
			cuoithang=30;
		}else{
			cuoithang=31;
		}
	}
	
	//kiem tra ngay nhap
	if((d<1||d>cuoithang)||m<1||m>12){
		printf("ngay ban nhap khong ton tai.\n");
	}else{
		if(m==1){
			stt=d;
		}else if(m==2){
			stt=31+d;
		}else if(m==3){
			stt=31+thang2+d;
		}else if(m==4){
			stt=31+thang2+31+d;
		}else if(m==5){
			stt=31+thang2+31+30+d;
		}else if(m==6){
			stt=31+thang2+31+30+31+d;
		}else if(m==7){
			stt=31+thang2+31+30+31+30+d;
		}else if(m==8){
			stt=31+thang2+31+30+31+30+31+d;
		}else if(m==9){
			stt=31+thang2+31+30+31+30+31+31+d;
		}else if(m==10){
			stt=31+thang2+31+30+31+30+31+31+30+d;
		}else if(m==11){
			stt=31+thang2+31+30+31+30+31+31+30+31+d;
		}else{
			stt=31+thang2+31+30+31+30+31+31+30+31+30+d;
		}
			
		printf("ngay ban nhap la ngay so %d trong nam",stt);	
	}
}
