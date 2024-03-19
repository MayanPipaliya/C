#include<stdio.h>

main()
{
	int n,coun;

	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		coun++;
		n /= 10;
	}
	
	printf("\nTotal num : %d",coun);

}
