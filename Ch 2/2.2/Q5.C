 #include<stdio.h>
#include<conio.h>
 
#define PI 3.14
 
main()
{
    float rad,area, perm;
 
    printf("Enter radius of circle: ");
    scanf("%f",&rad);
 
    area=PI*rad*rad;
    perm=2*PI*rad;
 
    printf("Area of circle: %f \nPerimeter of circle: %f\n",area,perm);
    
    getch();
}

