#include<stdio.h>

main()
{
	float fa ,ce; 
	
	printf("Enter temp in celcius :");
	scanf("%f",&ce);
	
	fa = (ce*1.8)+32;
	
	printf("Temp in fehrenheit : %2.f",fa);
}
