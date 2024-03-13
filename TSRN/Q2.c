#include<stdio.h>

int a(int num)
{
	if(num%3==0 && num%5==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	int number;
	
	printf("Enter Any Number : ");
	scanf("%d",&number);
	
	if(a(number))
	{
		printf("The given number is divisible by both 3 & 5. \n");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.");
	}
	
	return 0;
}
