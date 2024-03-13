#include<stdio.h>

main()
{
	char pass[20];
	
	printf("Enter Your password : ");
	scanf("%s",&pass);
	
	int i,n=strlen(pass),number=0,capital=0,small=0,special=0;
	
	
	for(i=0;pass[i]!='\0';i++)
	{
		if(pass[i] >= 'A' && pass[i] <= 'Z')
		{
			capital++;
		}
		else if(pass[i] >= 'a' && pass[i] <= 'z')				
		{
			small++;
		}
		else if(pass[i] >= '!' && pass[i] <= '/')
		{
			special++;			
		}
		else if(pass[i] >= ':' && pass[i] <= '@')
		{
			special++;
		}
		else if(pass[i] >= '[' && pass[i] <= '`')
		{
			special++;
		}
		else if(pass[i] >= '{' && pass[i] <= '~')
		{
			special++;
		}
		else if(pass[i] >= '0' && pass[i] <= '9')
		{
			number++;		
		}
	
	}
	
	((number>=1) && (capital>=1) && (small>=1) && (special>=1) && (n>=6))
		?printf("\n!! Your Password Is Strong !!")
		:printf("\n!! Your Password Is Not Strong !!");

}
