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

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %d\n", a, b, div);
    printf("%d %% %d = %d\n",a, b, mod);
	
	getch();
}
