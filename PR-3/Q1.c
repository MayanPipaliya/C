#include<stdio.h>

main()
{
	char n = 'a';
	
	do
	{
		printf("%c\t",n);
		n += 4;
		
	}while(n<='z');
	
	return 0;
}
