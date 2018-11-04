#include<stdio.h>
#include<conio.h>
int main()
{
	int max, n;
	for(int i = 1; i<=10; i++)
		{
			printf("Nhap vao so nguyen thu %d\n", i);
			scanf("%d", &n);
			
			if(n>max)
				max = n;
		}
		printf("So lon nhat trong 10 so la %d", max);
	return 0;
}
