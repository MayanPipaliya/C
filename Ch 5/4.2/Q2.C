#include<stdio.h>
#include<conio.h>

main() 
{
    int x, y;

    printf("Input value for x & y: \n");
    scanf("%d%d",&x,&y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("%d\n%d\n",x,y);

    getch();
}

