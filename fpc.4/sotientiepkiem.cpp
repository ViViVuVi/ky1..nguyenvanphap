#include<stdio.h>

int main(){
	float tk=4000, y=0;
	
	while(y<3){
		//yes
		tk=tk+tk*0.08;
		y++;
	}
	// no
	printf("sau 3 nam tong so tien la: %f\n",tk);
	
}
