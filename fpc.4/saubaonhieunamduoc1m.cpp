#include<stdio.h>

int main(){
	float tk=4000, y=0;
	
	while(tk<1000000){
		//yes
		tk=tk+tk*0.08;
		y++;
	}
	// no
	printf("sau %f nam tong so tien la 1 trieu.\n",y);
	
}
