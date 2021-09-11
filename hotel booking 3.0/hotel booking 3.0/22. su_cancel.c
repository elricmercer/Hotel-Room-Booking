#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include "customer.h"
#include "cancel.h"

void user_menu_switch();
void admin_login();
void login_regis_switch();

// SUITE ROOM CANCELLATION FIUNCTION
void su_cancel()
{
	FILE* fp, * tp, *cp;
	int i = 1, menu;
	char rNumber[4];
	char ch[1000];
	if ((cp = fopen("su_cancellation.txt", "a+")) == NULL)
		if ((cp = fopen("su_cancellation.txt", "w+")) == NULL)
			exit(0);
	if ((tp = fopen("temp.txt", "w")) == NULL)
		exit(0);
	if ((fp = fopen("suites_room_booking.txt", "r")) == NULL)
		exit(0);
	system("cls");
	printf("                             ************************************************************\n");
	printf("                              *****                                                *****\n");
	printf("                               ****              SUITE ROOM CANCELLATION           ****\n");
	printf("                              *****                                                *****\n");
	printf("                             ************************************************************\n\n\n");
	printf("                              * * * * * * * * * * Enter room number * * * * * * * * * *\n\n");
	fflush(stderr);
	printf("                                                  : ");
	scanf("%s", &rNumber);
	printf("\n");
	while (fread(&cus, sizeof(cus), 1, fp) == 1)
	{
		if (strcmp(cus.room_number, rNumber) == 0)
		{
			printf("                             ************************************************************\n");
			printf("                              *****                                                *****\n");
			printf("                               ****              SUITES ROOM CANCELLATION          ****\n");
			printf("                              *****                                                *****\n");
			printf("                             ************************************************************\n\n\n");
			printf("                            * * * * * * * * * * 1. Not a suitable room * * * * * * * * * *\n");
			printf("                            * * * * * * * * * * 2. Mind change * * * * * * * * * * * * * *\n");
			printf("                            * * * * * * * * * * 3. High rates * * * * * * * * * * * * * * *\n");
			printf("                            * * * * * * * * * * 4. Others * * * * * * * * * * * * * * * * *\n");
			printf("                                                   : ");
			scanf("%s", &ch);
			strcpy(cl.choice, ch);
			fprintf(cp, "Room_Number_is_%s_option_is_%s________", cus.room_number, cl.choice);
			fclose(cp);
			i = 0;
			continue;
		}
		else
			fwrite(&cus, sizeof(cus), 1, tp);
	}
	if (i == 1)
	{
		printf("NO RECORD FOUND!\n");
		fclose(fp);
		fclose(tp);
		fclose(cp);
	}
	else
	{
		fclose(fp);
		fclose(tp);
		fclose(cp);
		remove("suites_room_booking.txt");
		rename("temp.txt", "suites_room_booking.txt");
		printf("                         * * * * * * * * * * CUSTOMER SUCCESSFULLY REMOVED * * * * * * * * * *\n");
		printf("                    ------------------------------------------------------------------------------\n\n\n");
	}
	fclose(fp);
	fclose(tp);
	fclose(cp);
	printf("                                                                  press 1 to go back to menu or 2 for admin\n\n");
	fflush(stderr);
	printf("                                                                  : ");
	scanf("%d", &menu);
	printf("\n");
	switch (menu)
	{
	case 1: user_menu_switch();
		break;
	case 2: admin_login();
		break;
	default: login_regis_switch();
		break;
	}
}