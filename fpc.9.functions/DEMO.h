// tat ca deu la ham
// tai su dung ma nguon la demo.h
// can trong cung thu muc folder
// file .h khong chay duoc

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d \t",arr[i]);
	}
}

void scanArray(int arc[],int size){
	for(int i=0;i<size;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&arc[i]);
	}
}
int tongChuSo(int n){
	int tong =0;
	while(n!=0){
		int dv=n%10;
		tong+=dv;
		n/=10;
	}
	return tong;
}

int uocChungMax(int a,int b){
	int min=(a<b)?a:b;
	int max;
	for(int i=1;i<=min;i++){
		if (a%i==0&&b%i==0){
			max=i;
		}
	}
	return max;
}

int boiChungMin (int a,int b){
	int min=(a<b)?a:b;
	while(1==1){
		if(min%a==0&&min%b==0){
			return min;
		}
		min++;
	}
}
