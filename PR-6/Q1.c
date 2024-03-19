#include<stdio.h>
#include<string.h>

main()
{
	char name[20],myName[20];
	char rev[20];
	
	printf("Enter your Name :");
	gets(name);
	
	strlwr(name);
	
	strcpy(myName, name);
	
	strcpy(rev , strrev(myName));
	
	(strcmp(name,rev)==0)
		?puts("This name is palindrom")
		:puts("This name is not palindrom");
}
