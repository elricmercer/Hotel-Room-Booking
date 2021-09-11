#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void user_menu_switch();
void admin_login();
void login_regis_switch();

// ROOM DETAILS FUNCTION
void s_p_room_details()
{
	int ch, menu;
	system("cls");
	printf("                                  **************************************************************\n");
	printf("                                   *****                                                  *****\n");
	printf("                                    ****                    ROOM DETAILS                  ****\n");
	printf("                                   *****                                                  *****\n");
	printf("                                  **************************************************************\n\n\n");
	printf("                  1. STANDARD ROOMS                        2. DELUXE ROOMS                           3. SUITES\n\n");
	printf("                     : ");
	fflush(stderr);
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	{
		system("cls");
		printf("                                  **************************************************************\n");
		printf("                                   *****                                                  *****\n");
		printf("                                    ****                STANDARD ROOMS DETAILS            ****\n");
		printf("                                   *****                                                  *****\n");
		printf("                                  **************************************************************\n\n\n");
		printf("                                               1. RM 50 /night\n\n");
		printf("                                               2. 2 standard size beds\n\n");
		printf("                                               3. standard shower\n\n");
		printf("                                               4. 24/7 sevice\n\n\n");
		printf("                                                                         press 1 to go back or 2 for admin\n\n");
		printf("                                                                         : ");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1: user_menu_switch();
			break;
		case 2: admin_login();
			break;
		default: login_regis_switch();
			break;
		}
		break;
	}
	case 2:
	{
		system("cls");
		printf("                                  **************************************************************\n");
		printf("                                   *****                                                  *****\n");
		printf("                                    ****                 DELUXE ROOMS DETAILS             ****\n");
		printf("                                   *****                                                  *****\n");
		printf("                                  **************************************************************\n\n\n");
		printf("                                               1. RM 150 /night\n\n");
		printf("                                               2. 2 large size beds\n\n");
		printf("                                               3. living room space\n\n");
		printf("                                               4. LED TV\n\n");
		printf("                                               5. large shower\n\n");
		printf("                                               6. 24/7 sevice\n\n\n");
		printf("                                                                         press 1 to go back to menu or 2 for admin\n\n");
		printf("                                                                         : ");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1: user_menu_switch();
			break;
		case 2: admin_login();
			break;
		default: login_regis_switch();
			break;
		}
		break;
	}
	case 3:
	{
		system("cls");
		printf("                                  **************************************************************\n");
		printf("                                   *****                                                  *****\n");
		printf("                                    ****                 SUITE ROOMS DETAILS              ****\n");
		printf("                                   *****                                                  *****\n");
		printf("                                  **************************************************************\n\n\n");
		printf("                                               1. RM 400 /night\n\n");
		printf("                                               2. 2 queen size beds\n\n");
		printf("                                               3. living room space\n\n");
		printf("                                               4. tables, sofas and large flat LED TV\n\n");
		printf("                                               5. large shower\n\n");
		printf("                                               6. 24/7 sevice\n\n\n");
		printf("                                                                         press 1 to go back to menu or 2 for admin\n\n");
		printf("                                                                         : ");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1: user_menu_switch();
			break;
		case 2: admin_login();
			break;
		default: login_regis_switch();
			break;
		}
		break;
	}
	default: login_regis_switch();
		break;
	}
}