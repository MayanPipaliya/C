#include<stdio.h>

int inputsize()
{
	int n;
	scanf("%d",&n);
	
	return n;
}

void inputelet(int n,int a[])
{
	int i;
	
	printf("\n\nArray Input\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&a[i]);		
	}	
}

int sum(int n,int a[])
{
	int sum =0,i;
	
	for(i=0;i<n;i++)
	{
		sum += a[i];
	}
	
	return sum;
}

void main()
{
	int size;
	
	printf("Enter Array Size : ");
	size = inputsize();
	
	int a[size];
	
	inputelet(size,a);
	
	printf("Sum : %d",sum(size,a));
}


