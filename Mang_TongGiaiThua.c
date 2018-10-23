#include<stdio.h>
void NhapMang(int Mang[100], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Mang[%d]= ",i); scanf("%d",&Mang[i]);
	}
}
double TongGiaiThua(int Mang[100], int n){
	int i,S=0, GiaiThua=0;
	for(i=n; i>1; i--){
		GiaiThua *= i;
		S += GiaiThua; 
	}
	return S;
}
int main(){
	int N; int array[100];
	printf("Nhap so mang: "); scanf("%d",N);
	NhapMang(array, N);
	printf("Tong Giai Thua cua cac phan tu trong mang la: %lf", TongGiaiThua(array, N));
}
