#include<stdio.h>

main()
{
	int row,col;
	
	printf("enter row : ");
	scanf("%d",&row);
	printf("enter column : ");
	scanf("%d",&col);
	
	int i,j,a[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	int n = a[0][0];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>n)
			{
				n = a[i][j];	
			}
		}
	}
	
	printf("\nlargest element is : %d",n);
}
