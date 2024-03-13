#include<stdio.h>

int n(int num)
{
	return num*num*num;
}

void main()
{
	int a,num;
	
	printf("Enter Any Nmuber :");
	scanf("%d",&num);
	
	a = n(num);
	
	printf("Cube is : %d\n ",a);
	
	return 0;
}
