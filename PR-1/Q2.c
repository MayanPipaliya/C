#include<stdio.h>
#define PI 3.14;

void main()
{
	float bs,hra,da,ta,total=0;
	
	printf("Enetr base salary :");
	scanf("%f",&bs);
	
	hra = bs * 10 / 100;
	da = bs * 5 / 100;
	ta = bs * 8 / 100;
	
	total = bs+hra+da+ta;
	
	printf("Total salary : %2.f",total); 
}
