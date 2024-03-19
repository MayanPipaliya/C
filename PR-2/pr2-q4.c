#include <stdio.h>

main() 
{
    char a;

    printf("Enter the first letter of the day (M/T/W/H/F/S/U): ");
    scanf(" %c", &a);

    switch(a) 
	{
        case 'M':
            printf("Monday\n");
            break;
        case 'T':
            printf("Tuesday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'H':
            printf("Thursday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        case 'S':
            printf("Saturday\n");
            break;
        case 'U':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
    }
	getch();
}

