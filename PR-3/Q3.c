#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter a number : ");
	scanf("%d",&a);
	
	b = a%10;
	
	while(a > 9)
	{
		a = a/10;
	}
	
	printf("\nSum of first and last digit : %d",a + b);
	
}
