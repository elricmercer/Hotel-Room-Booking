#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include "customer.h"

void admin_menu_switch();
void login_regis_switch();

// STANDARD ROOM CUSTOMER RECORD FUNCTION
void sd_s_records()
{
	FILE* fp;
	char rNumber[4];
	int fg = 1, menu;
	fp = fopen("standard_room_booking.txt", "r+");
	if (fp == 0)
		exit(0);
	fflush(stderr);
	system("cls");
	printf("                             *************************************************\n");
	printf("                              *****                                     *****\n");
	printf("                               ****            CUSTOMER DETAILS         ****\n");
	printf("                              *****                                     *****\n");
	printf("                             *************************************************\n\n\n");
	printf("                          * * * * * * * * * * Enter room number * * * * * * * * * *\n\n");
	printf("                                              : ");
	scanf("%s", &rNumber);
	while (fread(&cus, sizeof(cus), 1, fp) == 1)
	{
		if (strcmp(cus.room_number, rNumber) == 0)
		{
			fg = 0;
			printf("\n\n\n");
			printf("                      ROOM NUMBER:               %s\n", cus.room_number);
			printf("                      FIRST NAME:                %s\n", cus.first_name);
			printf("                      LAST NAME:                 %s\n", cus.last_name);
			printf("                      NUMBER OF PEOPLE:          %s\n", cus.number_of_people);
			printf("                      ADDRESS:                   %s\n", cus.address);
			printf("                      PHONE NUMBER:              %s\n", cus.phone_number);
			printf("                      NATIONALITY:               %s\n", cus.nationality);
			printf("                      PASSPORT NO./NATIONAL ID:  %s\n", cus.national_id);
			printf("                      EMAIL ID:                  %s\n", cus.email);
			printf("                      ARRIVAL DATE:              %s\n", cus.arrival_date);
			printf("                      CHECK OUT DATE:            %s\n\n\n", cus.check_out_date);
			break;
		}
	}
	if (fg == 1)
		printf("CUSTOMER NOT FOUND!\n");
	fclose(fp);
	printf("                                                                                 press 1 to go back to menu\n");
	printf("                                                                                 : ");
	fflush(stderr);
	scanf("%d", &menu);
	switch (menu)
	{
	case 1: admin_menu_switch();
		break;
	default: login_regis_switch();
		break;
	}

}