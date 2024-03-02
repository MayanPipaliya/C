#include<stdio.h>
#include<conio.h>

main() 
{
    float x, y, z;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of y: ");
    scanf("%f", &y);

    z = (x + y) * (x + y);

    printf("The answer for is: %.2f\n", x, y, z);

    getch();
}

