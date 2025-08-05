#include<stdio.h>

int main(){
	float x,y,t;

	printf("so tien luong cua ban la: \t");
	scanf("%f",&x);
	
	y=x-11;
	
	if(y<=0){
		printf("so tien chiu thue la 0 dong");
	}else{
		if(y<=5){
			t=y*0.05;
			printf("so tien chiu thue la: %f trieu dong",t);
		}else{
			if(y<=10){
				t=5*0.05+(y-5)*0.1;
				printf("so tien chiu thue la: %f trieu dong",t);
			}else{
				if(y<=18){
					t=5*0.05+5*0.1+(y-10)*0.15;
					printf("so tien chiu thue la: %f trieu dong",t);
				}else{
					if(y<=32){
						t=5*0.05+5*0.1+8*0.15+(y-18)*0.2;
						printf("so tien chiu thue la: %f trieu dong",t);
					}else{
						if(y<=52){
							t=5*0.05+5*0.1+8*0.15+14*0.2+(y-32)*0.25;
							printf("so tien chiu thue la: %f trieu dong",t);
						}else{
							if(y<=80){
								t=5*0.05+5*0.1+8*0.15+14*0.2+20*0.25+(y-52)*0.3;
								printf("so tien chiu thue la: %f trieu dong",t);
							}else{
								t=5*0.05+5*0.1+8*0.15+14*0.2+20*0.25+28*0.3+(y-80)*0.35;
								printf("so tien chiu thue la: %f trieu dong",t);
							}
						}
					}
				}
			}
		}
	}
	
	
}
