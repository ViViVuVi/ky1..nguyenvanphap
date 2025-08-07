#include<stdio.h>

int main(){
	
	int x;
	printf("hay nhap mot so trong khoang tu 0 den 9: ");
	scanf("%d",&x);
	
	if(x<0||x>9){
		printf("ban da nhap sai. hay nhap trong khoang tu 0 den 9.\n");
	}else{
		char str;
		if(x==0){
			char str[10] = "khong";
			printf("so %d doc la: %s.\n",x,str);
		}else if(x==1){
			char str[10] = "mot";
			printf("so %d doc la: %s.\n",x,str);
		}else if(x==2){
			char str[10] = "hai";
			printf("so %d doc la: %s.\n",x,str);
		}else if(x==3){
			char str[10] = "ba";
			printf("so %d doc la: %s.\n",x,str);
		}else if(x==4){
			char str[10] = "bon";
			printf("so %d doc la: %s.\n",x,str);
		}else if(x==5){
			char str[10] = "nam";
			printf("so %d doc la: %s.\n",x,str);
		}else if(x==6){
			char str[10] = "sau";
			printf("so %d doc la: %s.\n",x,str);
		}else if(x==7){
			char str[10] = "bay";
			printf("so %d doc la: %s.\n",x,str);
		}else if(x==8){
			char str[10] = "tam";
			printf("so %d doc la: %s.\n",x,str);
		}else{
			char str[10] = "chin";
			printf("so %d doc la: %s.\n",x,str);
		}
		
	}
}
