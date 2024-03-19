#include<stdio.h>

main()
{
	char name[20];
	char rev[20];
	
	printf("Enter Your Name : ");
	scanf("%[^\n]",&name);
	
	int i,n,len,c=1;
	
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	
	n = len;
	len--;
	
	for(i=0;i<n;i++,len--)
	{
		rev[len-1] = name[i];
	}
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==rev[i])
		{
			c = 0;
		}
		break;	
	}
	
	if(c==0)
	{
		printf("this is Palindrome");
	}
	else
	{
		printf("this is not Palindrome");	
	}
}
