#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include "customer.h"

void admin_menu_switch();
void login_regis_switch();

// DELUXE ROOM RECORDS FUNCTION
void de_records()
{
	FILE* fp;
	int menu;
	if ((fp = fopen("deluxe_room_booking.txt", "r")) == NULL)
		exit(0);
	system("cls");
	printf("ROOM");
	printf("\tFIRST NAME");
	printf("\tLAST NAME");
	printf("\tNO. OF PEOPLE");
	printf("\tADDRESS");
	printf("\t\tPHONE NO.");
	printf("\tNATIONALITY");
	printf("\tPASSPORT NO./NID");
	printf("\tEMAIL");
	printf("\tARRIVAL");
	printf("\tCHECK OUT\n");
	while (fread(&cus, sizeof(cus), 1, fp) == 1)
	{
		printf("\n%s \t%s \t\t%s \t\t%s \t\t%s \t\t%s \t%s \t%s \t\t%s \t%s \t%s\n", cus.room_number, cus.first_name, cus.last_name, cus.number_of_people, cus.address, cus.phone_number, cus.nationality, cus.national_id, cus.email, cus.arrival_date, cus.check_out_date);
	}
	printf("\n");
	fclose(fp);
	printf("\npress 1 to go back to menu\n");
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