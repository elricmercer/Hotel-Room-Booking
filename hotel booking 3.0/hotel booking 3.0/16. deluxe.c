#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include "customer.h"

void user_menu_switch();
void admin_login();
void login_regis_switch();

// DELUXE ROOM FUNCTION
void deluxe()
{
	int rn, menu;
	char rNumber[4];
	FILE* fp;
	system("cls");
	printf("                                      ******************************************\n");
	printf("                                       *****                              *****\n");
	printf("                                        ****        DELUXE ROOM MENU      ****\n");
	printf("                                       *****                              *****\n");
	printf("                                      ******************************************\n\n\n");
	fflush(stdin);
	printf("                           * * * * * * * * * * 1. ENTER ROOM NUMBER (eg - 001 or 102) * * * * * * * * * *\n\n");
	printf("                                                  : ");
	scanf("%s", &rNumber);
	if ((fp = fopen("deluxe_room_booking.txt", "r+")) != NULL)
	{
		while (fread(&cus, sizeof(cus), 1, fp) == 1)
		{
			if (strcmp(cus.room_number, rNumber) == 0)
			{
				printf("                                   ROOM IS OCCUPIED, press 1 to select another room number\n\n");
				fflush(stdin);
				printf("                                   : ");
				scanf("%d", &rn);
				switch (rn)
				{
				case 1: deluxe();
					break;
				default: printf("ERROR\n");
				}
			}
			else
				strcpy(cus.room_number, rNumber);
		}
	}
	else
	{
		fp = fopen("deluxe_room_booking.txt", "a+");
		if (fp == 0)
			fp = fopen("deluxe_room_booking.txt", "w+");
		strcpy(cus.room_number, rNumber);
	}
	printf("\n");
	printf("                           * * * * * * * * * * 2. ENTER FIRST NAME * * * * * * * * * *\n\n");
	printf("                                                  : ");
	scanf("%s", &cus.first_name);
	printf("\n");
	printf("                           * * * * * * * * * * 3. ENTER LAST NAME * * * * * * * * * * *\n\n");
	printf("                                                  : ");
	scanf("%s", &cus.last_name);
	printf("\n");
	printf("                           * * * * * * * * * * 4. ENTER NUMBER OF PEOPLE * * * * * * * *\n\n");
	printf("                                                  : ");
	scanf("%s", &cus.number_of_people);
	printf("\n");
	printf("                           * * * * * * * * * * 5. ENTER YOUR ADDRESS (eg - endah,bukit/jalil ',' to separate & '/' for space) * * * * * * * * * *\n\n");
	printf("                                                  : ");
	scanf("%s", cus.address);
	printf("\n");
	printf("                           * * * * * * * * * * 6. ENTER YOUR PHONE NUMBER * * * * * * * * * *\n\n");
	printf("                                                  : ");
	scanf("%s", &cus.phone_number);
	printf("\n");
	printf("                           * * * * * * * * * * 7. ENTER YOUR NATIONALITY * * * * * * * * * * *\n\n");
	printf("                                                  : ");
	scanf("%s", &cus.nationality);
	printf("\n");
	printf("                           * * * * * * * * * * 8. ENTER YOUR PASSPORT NUMBER/NATIONAL ID * * *\n\n");
	printf("                                                  : ");
	scanf("%s", &cus.national_id);
	printf("\n");
	printf("                           * * * * * * * * * * 9. ENTER YOUR EMAIL ID * * * * * * * * * * * * *\n\n");
	printf("                                                  : ");
	scanf("%s", &cus.email);
	printf("\n");
	printf("                           * * * * * * * * * * 10. ENTER ARRIVAL DATE (dd\\mm\\yyyy) * * * * * *\n\n");
	printf("                                                   : ");
	scanf("%s", &cus.arrival_date);
	printf("\n");
	printf("                           * * * * * * * * * * 11. ENTER CHECK OUT DATE (dd\\mm\\yyyy)* * * * * *\n\n");
	printf("                                                   : ");
	scanf("%s", &cus.check_out_date);
	printf("\n");
	fwrite(&cus, sizeof(cus), 1, fp);
	fclose(fp);
	system("cls");
	printf("                                   **************************************************\n");
	printf("                                    *****                                      *****\n");
	printf("                                     ****      ROOM SUCCESSFULLY BOOKED        ****\n");
	printf("                                    *****                                      *****\n");
	printf("                                   **************************************************\n\n\n");
	printf("                                                                                Thank you\n\n\n");
	printf("                                                                                press 1 to go back to menu or 2 for admin\n");
	printf("                                                                                : ");
	fflush(stdin);
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
}