#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include "user.h"

// USER REGISTRATION FUNCTION
void user_register()
{
	FILE* fp;
	char uName[20], pwd[20];
	char c;
	pUser = (struct user*)malloc(sizeof(struct user));
	system("cls");
	if ((fp = fopen("user.dat", "a+")) == NULL)
		{
			if ((fp = fopen("user.dat", "w+")) == NULL)
			{
				printf("Could not open file\n");
				exit(1);
			}
		}
		printf("                              ***************************************************\n");
		printf("                               *****                                       *****\n");
		printf("                                ****             REGISTERATION             ****\n");
		printf("                               *****                                       *****\n");
		printf("                              ***************************************************\n");
		printf("                          * * * * * * * * * * Choose a username * * * * * * * * * *\n\n");
		fflush(stdin);
		printf("                                              : ");
		scanf("%s", pUser->username);
		printf("\n");
		printf("                          * * * * * * * * * * Choose a password * * * * * * * * * *\n\n");
		printf("                                              : ");
		scanf("%s", pUser->password);
		printf("\n");
		fwrite(pUser, sizeof(struct user), 1, fp);
	free(pUser);
	fclose(fp);
	login_regis_switch();
}