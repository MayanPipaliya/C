#include <stdio.h>
#include <conio.h>

main() 
{
	int  radius;
	float area;
    float pie = 3.14;
   
    printf("Enter The Radius of Cicle:");
    scanf("%d",& radius);
    printf("The radius of the circle is %d\n" ,  radius);
    area =(pie*  radius *  radius);
    printf("The area of the given circle is %f", area);
    
    getch();
}
