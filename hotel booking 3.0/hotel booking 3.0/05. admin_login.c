#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void admin_menu_switch();
void login_regis_switch();

// ADMINISTRATOR LOGIN FUNCTION
void admin_login()
{
	char uname[20], pass[20];
	system("cls");
	printf("                           *******************************************************\n");
	printf("                            *****                                           *****\n");
	printf("                             ****               ADMIN LOGIN MENU            ****\n");
	printf("                            *****                                           *****\n");
	printf("                           *******************************************************\n\n\n");
	printf("                       * * * * * * * * * * Enter username * * * * * * * * * *\n\n");
	fflush(stdin);
	printf("                                           : ");
	scanf("%s", &uname);
	printf("\n");
	printf("                       * * * * * * * * * * Enter password * * * * * * * * * *\n\n");
	printf("                                           : ");
	scanf("%s", &pass);
	printf("\n");
	if (strcmp(uname, "admin") == 0)
	{
		if (strcmp(pass, "root") == 0)
			admin_menu_switch();
	}
	else
		login_regis_switch();
}