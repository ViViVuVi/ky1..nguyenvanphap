#include<stdio.h>
#include<math.h>

int main(){
	int player[6],hign;
	
	//player=15;// la sai
	//player[0]=15;//player[0] chu so huu cua o nho dau tien
	
	//player[0+4]=12;
	// gia su muon nhap gia tri cho mang tu ban phim
	for(int i=0;i<6;i++){	// co y nghia duyet mang
		printf("nhap gia cua phan tu %d: \t",i);
		scanf("%d",&player[i]);
	}
	

	// display gia tri lon nhat cua mang player[11]
	hign=player[0];
	for(int i=1;i<6;i++){
		if(player[i]>hign){
			hign=player[i];
		}
	}
	printf("gia tri lon nhat trong mang la: %d.\n",hign);
	
	//tim gia tri lon thu 2 cua mang 
	
	int aquan=hign;
	// de tranh truong hop lay luon so lon nhat de so sanh. 
	// can kiem tra va lay ra gia tri khac gia tri lon nhat
	for(int i=1;i<6;i++){
		if(player[i]<hign){
			aquan=player[i];
			
			//gan aquan cho mot gia tri bat ky nho hon so lon nhat
			break;
		}
	} 
	// vong kiem tra khong tim duoc gia tri nao nho hon so lon nhat.
	if(aquan==hign){
		printf("mang toan so lon nhat.");
	}else{
		for(int i=1;i<6;i++){
		if((player[i]>aquan)&&player[i]<hign){
			aquan=player[i];
		}
	}
	printf("gia tri lon thu 2 trong mang la: %d.\n",aquan);
	}

	
	// display gia tri trung binh cua mang player[11]
	int total=0;
	for(int i=0;i<6;i++){
		total=total+player[i];
	}
	printf("gia tri trung binh cua mang player la: %d",total/6);
	
}
