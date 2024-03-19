#include<stdio.h>

main()
{
	float Unit,Bill,Total;

	printf("Enter your Unit : ");
	scanf("%f",&Unit);

	if(Unit <= 50)
	{
		Bill = Unit*0.50 ;
	}
	
	
	else if(Unit>=51 && Unit<=150)
	{
		Bill = ((Unit-50)*0.75) +25 +((Unit-50)*0.75*0.2) ;
	}
	
	
	else if(Unit>=151 && Unit<=250)
	{
		Bill = ((Unit-150)*1.20) +(75+25)+((Unit-150)*1.20*0.2);
	}
	
	
	else if(Unit>=251)
	{
		Bill = ((Unit-250)*1.50) +(120+75+25)+((Unit-150)*1.50*0.2);
	}
	
	
	else
	{
		printf("Invalid input !!");
	}
	

	Total = Bill;

	printf("Total bill : %.2f",Total);

}
