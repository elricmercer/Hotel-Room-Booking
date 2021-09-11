#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include "customer.h"

void user_menu_switch();
void admin_login();
void login_regis_switch();

// SUITE ROOM CUSTOMER DETAILS MODIFICATION FUNCTION
void su_modify()
{
	FILE* fp, * mtp;
	int i = 1, menu;
	char rNumber[4];
	long int size = sizeof(cus);
	if ((mtp = fopen("mtemp.txt", "w")) == NULL)
		exit(0);
	if ((fp = fopen("suites_room_booking.txt", "r+")) == NULL)
		exit(0);
	system("cls");
	printf("                             ******************************************************************\n");
	printf("                              *****                                                      *****\n");
	printf("                               ****             SUITES ROOM DETAILS MODIFY MENU          ****\n");
	printf("                              *****                                                      *****\n");
	printf("                             ******************************************************************\n\n\n");
	printf("                                  * * * * * * * * * * Enter room number * * * * * * * * * *\n\n");
	printf("                                                      : ");
	scanf("%s", &rNumber);
	printf("\n");
	fflush(stderr);
	while (fread(&cus, sizeof(cus), 1, fp) == 1)
	{
		if (strcmp(cus.room_number, rNumber) == 0)
		{
			i = 0;
			continue;
		}
		else
			fwrite(&cus, sizeof(cus), 1, mtp);
	}
	if (i == 1)
	{
		printf(" THE RECORD DOESN'T EXITS\n\n");
		fclose(fp);
		fclose(mtp);
	}
	else
	{
		printf("                                       PLEASE ENTER NEW THE DETAILS\n");
		printf("                  -----------------------------------------------------------------------\n\n\n");
		printf("                           * * * * * * * * * * 1. ENTER ROOM NUMBER (eg - 001 or 102) * * * * * * * * * *\n\n");
		printf("                                                  : ");
		scanf("%s", &cus.room_number);
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
		fseek(fp, size, SEEK_CUR);
		fwrite(&cus, sizeof(cus), 1, mtp);
		fclose(fp);
		fclose(mtp);
		remove("suites_room_booking.txt");
		rename("mtemp.txt", "suites_room_booking.txt");
		printf("                 * * * * * * * * * * THE RECORD HAS BEEN SUCCESSFULLY MODIFIED * * * * * * * * * *\n");
		printf("           -------------------------------------------------------------------------------------------------\n\n\n");
		fclose(fp);
		fclose(mtp);
	}
	printf("                                                                       press 1 to go back to menu or 2 for admin\n\n");
	fflush(stderr);
	printf("                                                                       : ");
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