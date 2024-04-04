#include<stdio.h>

void calc()
{
	int a,b,choice;
	
	AB:
	
		printf("1) For +\n");
		printf("2) For -\n");
		printf("3) For *\n");
		printf("4) For /\n");
		printf("5) For %%\n");
		printf("6) For Exit\n");	
		printf("\n\nEnter Your Choice : ");
		scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
				printf("\nAddition Of %d and %d : %d\n\n",a,b,a+b);
				goto AB;
		
		case 2:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
				printf("\nSubtraction Of %d and %d : %d\n\n",a,b,a-b);
				goto AB;
			
		case 3:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
				printf("\nMultiplication Of %d and %d : %d\n\n",a,b,a*b);
				goto AB;
			
		case 4:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
			
				if(b==0)
				{
					printf("\nERROR !!\n\n");
				}
				else
				{
					printf("\nDivision Of %d and %d : %d\n\n",a,b,a/b);	
				}
				goto AB;
			
		case 5:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
				printf("\nModulus Of %d and %d : %d\n\n",a,b,a%b);
				goto AB;
			
		case 6:
				printf("\n\nYOU EXIT THIS PROGRAAM !!");
				break;
			
		default :
				printf("\n\nENTER VALID INPUT !!\n\n");
				goto AB;
	}	
}

void main()
{
	calc();
}
