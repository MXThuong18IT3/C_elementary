#include<stdio.h>
#include<string.h>
int GT(int n){
	int i,S=0;
	for(i=n; i>1; i--){
		S *= i;
	}
	return S;
}
int main(){
	int A[]= {5,8,9};
	int i;
	for(i=0; i<3; i++){
		printf("Mang[%d]=%d ",i,A[i]);
		printf("\t");
	}
	printf("\n");
	int S;
	for(i=0; i<3; i++){
		S += GT(A[i]);
	}
	printf("Tong giai thua cac phan tu la= ", S);
	char chuoi[100];
	printf("Nhap chuoi: ");
	scanf("%s",&chuoi);
	int j, dem=0;
	for(j=0; j<strlen(chuoi); j++){
		if(chuoi[i]==' ') break;
		else dem++;
	}
	printf("Trong chuoi '%s' co %d ki tu.", chuoi, dem);
}//end main
