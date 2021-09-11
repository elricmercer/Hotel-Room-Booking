#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include "user.h"

void user_menu_switch();

// USER LOGIN FUNCTION
void user_login()
{
	FILE* fp;
	char uName[20], pwd[20];
	int i;
	pUser = (struct user*)malloc(sizeof(struct user));
	system("cls");
	if ((fp = fopen("user.dat", "r+")) == NULL)
	{
		if ((fp = open("user.dat", "w+")) == NULL)
		{
			printf("Could not open file\n");
			exit(1);
		}
	}
	printf("                          **************************************************\n");
	printf("                           *****                                      *****\n");
	printf("                            ****                LOGIN                 ****\n");
	printf("                           *****                                      *****\n");
	printf("                          **************************************************\n\n\n");
	printf("                   * * * * * * * * * * Enter your username * * * * * * * * * *\n\n");
	fflush(stdin);
	printf("                                       : ");
	scanf("%s", uName);
	printf("\n");
	printf("                   * * * * * * * * * * Enter your password * * * * * * * * * *\n\n");
	printf("                                       : ");
	scanf("%s", pwd);
	printf("\n");
	while (fread(pUser, sizeof(struct user), 1, fp) == 1)
	{
		if (strcmp(pUser->username, uName) == 0)
		{
			printf("MATCHED USERNAME\n");
			if (strcmp(pUser->password, pwd) == 0)
			{
				printf("MATCHED PASSWORD\n");
				user_menu_switch();
			}
		}
	}
	free(pUser);
	fclose(fp);
}