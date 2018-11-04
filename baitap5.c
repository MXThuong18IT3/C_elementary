#include<stdio.h>
int main(){
	int N, i;	long S;
	printf("TINH TONG BINH PHUONG CAC SO LE TU 1 --> N\n");
	printf("Nhap N: ");	scanf("%d", &N);
	for(i=1; i<=N; i++){
		if(i%2!=0){
			S += i;
		}
	}
	printf("Tong binh phuong cac so le tu 1 --> N la: %d", S);
}
