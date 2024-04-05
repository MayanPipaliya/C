#include<stdio.h>

int len(char str[],char*ptr)
{
	int i,size=0;
	
	for(i=0;*(ptr + i)!='\0';i++)
	{
		size++;
	}
	return size;
}

main()
{
	char str[20];
	
	printf("Enter any string: ");
	scanf("%[^\n]",&str);
	
	printf("len of string : %d ",len(str,&str[0]));
}
