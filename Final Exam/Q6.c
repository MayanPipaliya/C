#include<stdio.h>

struct std
{
	
	char company_name[20];
	char color[20];
	char model[20];
	int price;
};

void main()
{
	struct std s1[3];
	int i;
	
	printf("-- INPUT MOBILE DATA --\n");

		printf("Enter company Name\t: ");
		scanf("%[^\n]",&s1[i].company_name);
		fflush(stdin);
		printf("Enter color\t: ");
		scanf("%[^\n]",&s1[i].color);
		fflush(stdin);
		printf("Enter model\t: ");
		scanf("%[^\n]",&s1[i].model);
		fflush(stdin);
		printf("Enter price\t: ");
		scanf("%d",&s1[i].price);
		fflush(stdin);
	
	system("cls");
	
	printf("\n\n\t\t--COMPANY DATA --");
	printf("\n\n\tCOMPANY NAME\t\tColor\t\tMODEL\t\tPRICE\n\n");
	
	printf("%d\t%s\t\t%d\t%s\t%s\t\t%d\t\\t%s\n\n",s1[i].company_name,s1[i].color,s1[i].model,s1[i].price);
}
