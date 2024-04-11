#include<stdio.h>

main()
{
	int n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0)
	{
		printf("n is divisible by 3 and 5...");
	}
	else
	{
		printf("n is not divisible by 3 and 5..");
	}
}
