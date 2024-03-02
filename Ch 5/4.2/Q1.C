#include <stdio.h> 
#include<conio.h>

main()
{
    int var1, var2, temp;
	 
    printf("Enter two integers \n");
    scanf("%d%d", &var1, &var2);
    
    temp = var1;
    var1 = var2;
    var2 = temp;
    
    printf("%d\n%d\n", var1, var2);
    getch();
}
