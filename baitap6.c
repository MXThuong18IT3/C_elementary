#include<stdio.h>
int main(){
	int N, i, S=1;
	printf("TINH GIAI THUA\n");
	printf("Nhap N: ");	scanf("%d",&N);
	for(i=N; i>1; i--){
		S *= i;
	}
	printf("Giai thua cua N la: %d", S);
}
