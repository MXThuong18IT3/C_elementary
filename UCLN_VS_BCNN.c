#include<stdio.h>
int main()
{
	int a, b, i, max, min, UCLN, BCNN;
	printf("Nhap vao 2 so nguyen\n");
	scanf("%d %d", &a, &b);
	if(a>b) max = a, min = b ;
	else if(a<b) max = b, min = a;
	else if (a=b){
	max=min=a;
	}
		for( i = max; i>=max; i++)
		{
			if(i%max==0&&i%min==0)
		 	{
			 BCNN = i;
		  	 break;
		 	}
		}
		printf("BCNN cua %d va %d la %d", a, b, BCNN);
		for(i = min; i<=min; i--)
		{
			if(max%i==0&&min%i==0)
		 	{
				UCLN = i;
		  		break;
		 	}	 
		}
		printf("\n");
		printf("UCLN cua %d va %d la %d", a, b, UCLN);

/*else{ printf("BCNN cua %d va %d la %d", a, a, a); printf("\n");
	  printf("UCLN cua %d va %d la %d", a, a, a);
}*/
	return 0;
	
}
