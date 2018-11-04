#include<stdio.h>
#include<conio.h>
int main(){
	int i, N;	
	double S = 0;
	printf("TONG NGHICH DAO CUA N SO NGUYEN DAU TIEN\n");
	printf("Nhap N: ");	scanf("%d",&N);
	for(i=1; i<=N; i++){
		S = S + (double)1/i;
	}
	printf("Tong nghich dao cua N la: %.2lf", S);
	return 0;
}
