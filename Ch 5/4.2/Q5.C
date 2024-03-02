#include<stdio.h>
#include<conio.h>

main() 
{

    float x, y, result;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of y: ");
    scanf("%f", &y);

    result = (x + y) * (x + y) * (x + y);

    printf("The result of the formula is: %.2f\n", x, y, result);

    getch();
}

