#include<stdio.h>

int boiChungMin (int a,int b){
	int min=(a<b)?a:b;
	while(1==1){
		if(min%a==0&&min%b==0){
			return min;
		}
		min++;
	}
}

int main(){
	int x,y;
	printf("nhap hai so: ");
	scanf("%d%d",&x,&y);
	printf("boi min cua %d va %d la %d.\n",x,y,boiChungMin(x,y));
	return 0;	
}


