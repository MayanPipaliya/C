#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,sum, sub, mul, mod, div;
	
	printf("Enter Value Of a:");
	scanf("%d",&a);
	printf("Enter Value Of b:");
	scanf("%d",&b);
	
	sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("Addition of       %d + %d = %d\n", a, b, sum);
    printf("Subtraction of    %d - %d = %d\n", a, b, sub);
    printf("Multiplication of %d * %d = %d\n", a, b, mul);
    printf("Division of       %d / %d = %d\n", a, b, div);
    printf("Modulus of        %d %% %d = %d\n",a, b, mod);
	
	getch();
}
