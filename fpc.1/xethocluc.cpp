#include <stdio.h>

int main(){
	
	int x;
	printf("hay nhap diem:\t");
	scanf("%d",&x);
	
	if(x>=9){
		printf("hoc luc xuat sac");
	}else{
		if(x>=8){
			printf("hoc luc gioi");
		}else{
			if(x>=6){
				printf("hoc luc kha");
			}else{
				if(x>=5){
					printf("hoc luc trung binh");
				}else{
					printf("hoc luc yeu");
				}
			}
		}
	}
}
