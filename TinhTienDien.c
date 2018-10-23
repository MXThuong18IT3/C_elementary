#include<conio.h>
#include<conio.h>
main (){
	float somoi, socu,tien,tieuthu;
	printf(" Nhap so chu dien moi:_ ");
	scanf("%f", & somoi);
	printf(" Nhap so chu dien cu:_ ");
	scanf("%f", & socu);
	if(socu>=somoi) printf("So chu dien cu lon hon so moi.");
	while(somoi>socu){
		tieuthu = somoi - socu;
		if (tieuthu<50) {
			tien = 1500*tieuthu;
			printf("Tien la %1.3f",tien);
			break;
    	}
    	else if(tieuthu>=50&&tieuthu<150){
    		tien=50*1500+(tieuthu-50)*2000;
    		printf("Tien la %1.3f",tien);
    		break;
		}
		else {
			tien=50*1500+100*2000+(tieuthu-150)*2500;
    		printf("Tien la %1.3f",tien);
    		break;
		}
	}
}
