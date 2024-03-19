#include<stdio.h>

main()
{
	char word[30];
	int i,j,count=1;
	
	printf("Enter Any Words : ");
	gets(word);
	
	int n=strlen(word);
	strlwr(word);
	
	for(i=0;i<n;i++)
	{
		count=1;
		if(word[i])
		{
		
			if(word[i]!='\0')
			{	
				for(j=i+1;j<n;j++)
				{
					if(word[i]==word[j])
					{
						count++;
						word[j]='\0';
					}
				}
				printf("'%c' => %d\n",word[i],count);
			}		
		}
	}
}
